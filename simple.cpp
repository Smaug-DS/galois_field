#include "simple.h"
#include "ui_simple.h"
#include "sysinfoapi.h"

#include <QDebug>
#include <QObject>
#include <QMessageBox>
#include <QElapsedTimer>
#include <QAbstractItemModel>

#include <QCoreApplication>
#include <QVector>
#include <QFile>
#include <QTextStream>

simple::simple(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::simple)
{
    ui->setupUi(this);
}

simple::~simple()
{
    delete ui;
}

bool simple::is_prime(int n) {
    if (n <= 1) return false;
    if (n <= 3) return true;
    if (n % 2 == 0 || n % 3 == 0) return false;
    for (int i = 5; i * i <= n; i += 6)
        if (n % i == 0 || n % (i + 2) == 0)
            return false;
    return true;
}

int simple::compute(bool with_giu, int p)
{
    size_t size_ = 0;

    if (!is_prime(p))
    {
        throw "Число не является простым";
    }
    else
    {
        if (with_giu)
        {
            ui->add->setRowCount(p);
            ui->add->setColumnCount(p);

            QAbstractItemModel *model = ui->add->model();
            QStringList labels;
            for (int i = 0; i < p; ++i) {
                /* Fill the row */
                for (int j = 0; j < p; ++j) {
                    QTableWidgetItem *item =
                        new QTableWidgetItem(QString("item %1     %2").arg(i).arg(j));
                    ui->add->setItem(i, j, item);
                }
                /* Get row's vertical header label */
                QVariant data = model->headerData(i, Qt::Vertical);
                labels << QString("%1").arg(data.toInt() - 1);
                /* Apparently, two lines above can be replaced with one below */
                // labels << QString("%1").arg(65 + i);
            }
            /* Update vertical header labels */
            ui->add->setVerticalHeaderLabels(labels);
            ui->add->setHorizontalHeaderLabels(labels);


            ui->mult->setRowCount(p);
            ui->mult->setColumnCount(p);
            ui->mult->setVerticalHeaderLabels(labels);
            ui->mult->setHorizontalHeaderLabels(labels);

            ui->sub->setRowCount(p);
            ui->sub->setColumnCount(p);
            ui->sub->setVerticalHeaderLabels(labels);
            ui->sub->setHorizontalHeaderLabels(labels);

            ui->div->setRowCount(p);
            ui->div->setColumnCount(p);
            ui->div->setVerticalHeaderLabels(labels);
            ui->div->setHorizontalHeaderLabels(labels);
        }

        QVector<QVector<int>> add_ = add.addition(p);

        if (with_giu)
        {
            for (int i = 0; i < p; i++)
            {
                for (int j = 0; j < p; j++)
                {
                    QTableWidgetItem *item = new QTableWidgetItem(QString::number(add_[i][j]));
                    ui->add->setItem(i, j, item);
                }
            }
        }

        QVector<QVector<int>> mult_ = multi.multiplication(p);

        if (with_giu)
        {
            for (int i = 0; i < p; i++)
            {
                for (int j = 0; j < p; j++)
                {
                    QTableWidgetItem *item = new QTableWidgetItem(QString::number(mult_[i][j]));
                    ui->mult->setItem(i, j, item);
                }
            }
        }

        QVector<QVector<int>> sub_ = substac.subtraction(p);

        if (with_giu)
        {
            for (int i = 0; i < p; i++)
            {
                for (int j = 0; j < p; j++)
                {
                    QTableWidgetItem *item = new QTableWidgetItem(QString::number(sub_[i][j]));
                    ui->sub->setItem(i, j, item);
                }
            }
        }

        QVector<QVector<int>> div_ = div.division(p);

        if (with_giu)
        {
            for (int i = 0; i < p; i++)
            {
                for (int j = 0; j < p; j++)
                {
                    QTableWidgetItem *item = new QTableWidgetItem(QString::number(div_[i][j]));
                    ui->div->setItem(i, j, item);
                }
            }
        }

        size_ += sizeof(add_[0][0]) * p * p * 4;
    }

    if (with_giu)
    {
        ui->add->resizeColumnsToContents();
        ui->sub->resizeColumnsToContents();
        ui->mult->resizeColumnsToContents();
        ui->div->resizeColumnsToContents();
    }

    return size_;
}

simple::profile_result simple::run_profiler(int p) {
    QElapsedTimer timer;
    timer.start();

    simple::profile_result result;
    result.p = p;
    result.memory_used = compute(false, p);
    result.time_elapsed = timer.nsecsElapsed() / 1000.0 / 1000.0;

    qDebug() << "p:" << p;
    qDebug() << "simple biuld memory used:" << result.memory_used << "bytes";
    qDebug() << "simple biuld time used:" << result.time_elapsed << "milliseconds";

    return result;
}

void simple::write_profile_in_file() {
    QFile file("C:\\Users\\smaug\\Downloads\\galois_field\\profile_simple.csv");
    if (!file.open(QIODevice::WriteOnly | QIODevice::Text))
        return;

    QTextStream out(&file);
    out << "prime,memory_used,time_elapsed\n";

    for (int i = 1; i <= 150; i++) {
        if (is_prime(i)) {
            profile_result result = run_profiler(i);
            out << result.p << "," << result.memory_used << "," << result.time_elapsed << "\n";
        }
    }

    file.close();
}

void simple::on_pushButton_clicked()
{
    try
    {
        if (ui->textEdit->toPlainText()== "")
        {
            throw "Отсутствует введенное значение";
        }

        int p = ui->textEdit->toPlainText().toInt();

        QElapsedTimer timer;
        timer.start();

        int mem_size = compute(true, p);

        qDebug() << "p:" << p;
        qDebug() << "simple biuld memory used:" << mem_size << "bytes";
        qDebug() << "simple biuld time used:" << timer.elapsed() << "milliseconds";
    }
    catch (const char* ex)
    {
        QMessageBox::warning(this, "Предупреждение", ex);
    }
    catch (...)
    {
        QMessageBox::critical(this, "Ошибка", "Не удалось обработать входные данные");
        ui->textEdit->clear();
    }
}

