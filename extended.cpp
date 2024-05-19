#include "simple.h"
#include "extended.h"
#include "ui_extended.h"

#include <vector>

#include <QElapsedTimer>
#include <QMessageBox>
#include <QDebug>
#include <QFile>

extended::extended(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::extended)
{
    ui->setupUi(this);
}

extended::~extended()
{
    delete ui;
}

void extended::init_table(qint64 length, qint64 n) {
    ui->tableWidget_1->setRowCount(length);
    ui->tableWidget_1->setColumnCount(1);
    ui->tableWidget_2->setRowCount(length);
    ui->tableWidget_2->setColumnCount(1);
    ui->tableWidget_3->setRowCount(length);
    ui->tableWidget_3->setColumnCount(n);
    ui->tableWidget_4->setRowCount(length);
    ui->tableWidget_4->setColumnCount(n);

    ui->tableWidget_1->setItem(0, 0, new QTableWidgetItem("0"));
    ui->tableWidget_2->setItem(0, 0, new QTableWidgetItem("a^(-INF)"));
    ui->tableWidget_3->setItem(0, 0, new QTableWidgetItem("0"));

    for (int h = 0; h < n; h++)
    {
        ui->tableWidget_4->setItem(0, h, new QTableWidgetItem("0"));
    }
}

void extended::fill_real_exp(qint64 length) {
    for (qint64 i = 1; i < length; ++i) {
        // real
         ui->tableWidget_1->setItem(i, 0, new QTableWidgetItem(QString::number(i)));
         // exponent
         ui->tableWidget_2->setItem(i, 0, new QTableWidgetItem("a^" + QString::number(i - 1)));
    }
}

void extended::fill_poly_vector(qint64 n, std::vector<qint64>& result, qint64 iterator)
{
    for (int h = 0; h < n; h++)
    {
        // если есть x^ то коэффициент на 0
        if (result[h] != 0)
        {
            // если коэффициент равен 1
            if (result[h] == 1)
            {
                // если первый множитель (так как записываем полином с конца)
                if (h == 0)
                {
                    ui->tableWidget_3->setItem(iterator + 1, h, new QTableWidgetItem("1"));
                }
                else
                {
                    ui->tableWidget_3->setItem(iterator + 1, h, new QTableWidgetItem("x^" + QString::number(h)));
                }
            }
            else
            {
                if (h != 0)
                {
                    ui->tableWidget_3->setItem(iterator + 1, h, new QTableWidgetItem(QString::number(result[h]) + "x^" + QString::number(h)));
                }
                else
                {
                    ui->tableWidget_3->setItem(iterator + 1, h, new QTableWidgetItem(QString::number(result[h])));
                }
            }
        }

        // берем значение из result
        ui->tableWidget_4->setItem(iterator + 1, h, new QTableWidgetItem(QString::number(result[h])));
    }
}

qint64 extended::compute(bool with_gui, qint64 p, qint64 n)
{
    simple check_prime;
    if (!check_prime.is_prime(p))
    {
        throw "Число p не является простым";
    }

    std::vector<qint64> irreducible = irred.irreducible(p, n);

    if (irreducible == std::vector<qint64>())
    {
        throw "Для данного значения характеристики и значения не предусмотрено неприводимого многочлена";
    }

    qint64 length = len.pow(p, n);

    if (with_gui)
    {
        init_table(length, n);
    }

    if (with_gui)
    {
        // start with 1, cuz call init_table
        fill_real_exp(length);
    }

    std::vector<qint64> result(length + 1, 0);
    std::vector<qint64> intermediate(length + 1, 0);

    result[0] = 1;
    qint64 iterator = 0;

    // цикл от 0 до (p^n)-1 (так как 1-е члены были в init_table)
    while (iterator < (length - 1))
    {
        if (with_gui)
        {
            fill_poly_vector(n, result, iterator);
        }

        // проход по каждому члену полинома
        for (qint64 i = 0; i <= n; i++)
        {
            // сдвигаем элементы на один вправо
            intermediate[i + 1] = result[i];

            // если сдиг сделал степерь >n (для 2^3 это x^3), то вычитаем почлено неприводимый от текущего по модулю
            if (intermediate[n] != 0)
            {
                for (qint64 j = 0; j < (n + 1); j++)
                {
                    intermediate[j] -= irreducible[j];

                    // если отрицательное, то делаем пока не станет положительным
                    if (intermediate[j] < 0)
                    {
                        while (intermediate[j] < 0)
                        {
                            intermediate[j] += p;
                        }
                    }

                    // если больше p, то вычитаем, пока не станет меньше p
                    if (intermediate[j] > p)
                    {
                        while (intermediate[j] > p)
                        {
                            intermediate[j] -= p;
                        }
                    }
                }
            }
        }

        for (qint64 v = 0; v <= n; v++)
        {
            result[v] = intermediate[v];
        }

        for (qint64 z = 0; z <= n; z++)
        {
            intermediate[z] = 0;
        }

        iterator++;
    }
    if (with_gui)
    {
        ui->tableWidget_1->resizeColumnsToContents();
        ui->tableWidget_2->resizeColumnsToContents();
        ui->tableWidget_3->resizeColumnsToContents();
        ui->tableWidget_4->resizeColumnsToContents();
    }

    qint64 memory = (sizeof(length) + sizeof(irreducible[0]) * irreducible.size() + sizeof(result[0]) * result.size() + sizeof(intermediate[0]) * intermediate.size());
    return memory;
}

extended::profile_result extended::run_profiler(qint64 p, qint64 n)
{
    extended::profile_result result;
    QElapsedTimer timer;
    timer.start();

    result.p = p;
    result.n = n;
    result.memory_used = compute(false, p, n);
    result.time_elapsed = timer.nsecsElapsed() / 1000.0 / 1000.0;

    qDebug() << "p:" << p;
    qDebug() << "n:" << n;
    qDebug() << "Extended build memory used: " << result.memory_used << "bytes";
    qDebug() << "Extended build time used: " << result.time_elapsed << "milliseconds";

    return result;
}

void extended::write_profile_in_file()
{
    QFile file("C:\\Users\\smaug\\Downloads\\galois_field\\profile_extended.csv");
    if (!file.open(QIODevice::WriteOnly | QIODevice::Text))
        return;

    QTextStream out(&file);
    out << "prime,exp,memory_used,time_elapsed\n";

    simple check_prime;
    for (qint64 i = 2; i <= 3; i++)
    {
        for (qint64 j = 2; j <= 10; j++)
        {
            if (check_prime.is_prime(i))
            {
                profile_result result = run_profiler(i, j);
                out << result.p << "," << result.n << "," << result.memory_used << "," << result.time_elapsed << "\n";
            }
        }
    }

    file.close();
}

void extended::on_pushButton_clicked()
{
    try
    {
        if (ui->textEdit_1->toPlainText() == "" || ui->textEdit_2->toPlainText() == "")
        {
            throw "Отсутствуют значения на ввод";
        }

        qint64 p = ui->textEdit_1->toPlainText().toInt();
        qint64 n = ui->textEdit_2->toPlainText().toInt();

        qint64 _ = compute(true, p, n);

        QElapsedTimer timer;
        timer.start();

        qint64 mem = compute(false, p, n);

        qDebug() << "p:" << p;
        qDebug() << "n:" << n;
        qDebug() << "Extended build memory used:" << mem << "bytes";
        qDebug() << "Extended build time used:" << timer.nsecsElapsed() / 1000.0 / 1000.0 << "milliseconds";
    }
    catch (const char* ex)
    {
        QMessageBox::warning(this, "Предупреждение", ex);
    }
    catch (...)
    {
        QMessageBox::critical(this, "Ошибка", "Не удалось обработать входные данные");
    }
}

