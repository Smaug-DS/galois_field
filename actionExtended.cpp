#include "actionExtended.h"
#include "ui_actionExtended.h"

#include <QMessageBox>
#include <QElapsedTimer>
#include <QDebug>

actionExtended::actionExtended(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::actionExtended)
{
    ui->setupUi(this);
    ui->comboBox->addItems({"сложение (полин.)", "вычитание (полин.)", "умножение (степ.)", "деление (степ.)"});
}

actionExtended::~actionExtended()
{
    delete ui;
}

void actionExtended::on_pushButton_clicked()
{
    try
    {
        if (ui->textEdit_1->toPlainText() == "" ||
            ui->textEdit_2->toPlainText() == "" ||
            ui->textEdit_3->toPlainText() == "" ||
            ui->textEdit_4->toPlainText() == "")
        {
            throw "Отсутствуют значения на ввод или операнды";
        }

        int num1, num2, result, p, n, y = 0, l = 0;
        int between1[64], between2[64], res[64];

        p = ui->textEdit_1->toPlainText().toInt();
        n = ui->textEdit_2->toPlainText().toInt();
        num1 = ui->textEdit_3->toPlainText().toInt();
        num2 = ui->textEdit_4->toPlainText().toInt();

        QIntValidator* intValidator = new QIntValidator(0, 1000, this);

        QString textP = ui->textEdit_1->toPlainText();
        QString textN = ui->textEdit_2->toPlainText();
        QString textNum1 = ui->textEdit_3->toPlainText();
        QString textNum2 = ui->textEdit_4->toPlainText();

        int pos = 0;

        if (!intValidator->validate(textP, pos) ||
            !intValidator->validate(textN, pos) ||
            !intValidator->validate(textNum1, pos) ||
            !intValidator->validate(textNum2, pos))
        {
            throw 404;
        }

        if (irred.irreducible(p, n) == std::vector<qint64>())
        {
            throw "Для данного значения характеристики и значения не предусмотренного неприводимого многочлена";
        }

        ui->tableWidget->setRowCount(1);
        ui->tableWidget->setColumnCount(n);
        for (int i = 0; i < n; i++)
        {
            ui->tableWidget->setItem(0, i, new QTableWidgetItem(""));
        }

        QElapsedTimer timer;
        timer.start();

        int f = len.pow(p, n);

        if (ui->comboBox->currentText() == "сложение (полин.)")
        {
            for (int j = 0; j < n; j++)
            {
                l = num1 % 10;
                between1[j] = l;
                y = num1 / 10;
                num1 = y;

                l = num2 % 10;
                between2[j] = l;
                y = num2 / 10;
                num2 = y;

                res[j] = between1[j] + between2[j];
                if (res[j] >= p)
                {
                    res[j] -= p;
                }

                if (res[j] != 0)
                {
                    if (res[j] == 1)
                    {
                        if (j != 0)
                        {
                            ui->tableWidget->setItem(0, j, new QTableWidgetItem("x^" + QString::number(j)));
                        }
                        else
                        {
                            ui->tableWidget->setItem(0, j, new QTableWidgetItem("1"));
                        }
                    }
                    else
                    {
                        if (j != 0)
                        {
                            ui->tableWidget->setItem(0, j, new QTableWidgetItem(QString::number(res[j]) + "x^" + QString::number(j)));
                        }
                        else
                        {
                            ui->tableWidget->setItem(0, j, new QTableWidgetItem(QString::number(res[j])));
                        }
                    }
                }
            }
        }

        if (ui->comboBox->currentText() == "вычитание (полин.)")
        {
            for (int j = 0; j < n; j++)
            {
                l = num1 % 10;
                between1[j] = l;
                y = num1 / 10;
                num1 = y;

                l = num2 % 10;
                between2[j] = l;
                y = num2 / 10;
                num2 = y;

                res[j] = between1[j] - between2[j];
                if (res[j] < 0)
                {
                    res[j] += p;
                }

                if (res[j] != 0)
                {
                    if (res[j] == 1)
                    {
                        if (j != 0)
                        {
                            ui->tableWidget->setItem(0, j, new QTableWidgetItem("x^" + QString::number(j)));
                        }
                        else
                        {
                            ui->tableWidget->setItem(0, j, new QTableWidgetItem("1"));
                        }
                    }
                    else
                    {
                        if (j != 0)
                        {
                            ui->tableWidget->setItem(0, j, new QTableWidgetItem(QString::number(res[j]) + "x^" + QString::number(j)));
                        }
                        else
                        {
                            ui->tableWidget->setItem(0, j, new QTableWidgetItem(QString::number(res[j])));
                        }
                    }
                }
            }
        }


        if (ui->comboBox->currentText() == "умножение (степ.)" ||
            ui->comboBox->currentText() == "деление (степ.)")
        {
            if (num1 > f - 2 || num2 > f - 2)
            {
                throw "Значение превышает допустимую степень с текущей характеристикой и размерностью";
            }

            if (ui->comboBox->currentText() == "умножение (степ.)")
            {
                result = (num1 + num2) % (f - 1);
                ui->tableWidget->setItem(0, 0, new QTableWidgetItem(QString::number(result)));
            }

            if (ui->comboBox->currentText() == "деление (степ.)")
            {
                result = (num1 - num2);
                if (result < 0)
                {
                    result += (f - 1);
                }
                ui->tableWidget->setItem(0, 0, new QTableWidgetItem(QString::number(result)));
            }
        }

        qDebug() << "p:" << p;
        qDebug() << "n:" << n;
        qDebug() << "Actions extended memory used:" << (sizeof(num1) * 4) + (sizeof(f)) << "bytes";
        qDebug() << "Actions extended time used:" << timer.nsecsElapsed() / 1000.0 / 1000.0 << "milliseconds";

        ui->tableWidget->resizeColumnsToContents();
    }
    catch (const char* ex)
    {
        QMessageBox::warning(this, "Предупреждение", ex);
    }
    catch (const int& ex)
    {
        QMessageBox::warning(this, "Предупреждение", "Недопустимые значения ввода");
    }
    catch (...)
    {
        QMessageBox::critical(this, "Ошибка", "Не удалось обработать входные данные");
    }
}

