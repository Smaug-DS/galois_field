#include "extended.h"
#include "ui_extended.h"

#include <QMessageBox>

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

void extended::on_pushButton_clicked()
{
    try
    {
        if (ui->textEdit_1->toPlainText() == "" || ui->textEdit_2->toPlainText() == "")
        {
            return;
        }

        int p = ui->textEdit_1->toPlainText().toInt();
        int n = ui->textEdit_2->toPlainText().toInt();

        extendedBuilding sizeL;
        int length = sizeL.sizeL(p, n);

        QVector<int> result(length + 1);
        QVector<int> intermediate(length + 1);

        int counterForLoop = 0, counterForIntegerForm = 0;

        extendedBuilding irred;
        QVector<int> irreducible = irred.irreducible(p, n);

        if (irreducible == QVector<int>())
        {
            throw "Для данного значения характеристики и значения не предусмотренного неприводимого многочлена";
        }

        ui->tableWidget_1->setRowCount(length);
        ui->tableWidget_1->setColumnCount(2);
        ui->tableWidget_2->setRowCount(length);
        ui->tableWidget_2->setColumnCount(2);
        ui->tableWidget_3->setRowCount(length);
        ui->tableWidget_3->setColumnCount(n + 1);
        ui->tableWidget_4->setRowCount(length);
        ui->tableWidget_4->setColumnCount(n + 1);

        ui->tableWidget_3->setItem(0, 0, new QTableWidgetItem("1)"));
        ui->tableWidget_4->setItem(0, 0, new QTableWidgetItem("1)"));

        for (int i = 0; i < (length + 1); i++)
        {
            result[i] = 0;
            intermediate[i] = 0;
        }

        for (int h = 0; h < (n); h++)
        {
            ui->tableWidget_4->setItem(0, h + 1, new QTableWidgetItem(QString::number(result[h])));
        }

        ui->tableWidget_3->setItem(0, 1, new QTableWidgetItem("0"));
        result[0] = 1;

        while (counterForIntegerForm < length)
        {
            if (counterForIntegerForm == 0)
            {
                ui->tableWidget_1->setItem(counterForIntegerForm, 0, new QTableWidgetItem(QString::number(counterForIntegerForm + 1) + ")"));
                ui->tableWidget_1->setItem(counterForIntegerForm, 1, new QTableWidgetItem(QString::number(counterForIntegerForm)));
                ui->tableWidget_2->setItem(counterForIntegerForm, 0, new QTableWidgetItem(QString::number(counterForIntegerForm + 1) + ")"));
                ui->tableWidget_2->setItem(counterForIntegerForm, 1, new QTableWidgetItem(QString(" ") + QString("a") + QString("^") + QString("-INF")));
            }
            else
            {
                ui->tableWidget_1->setItem(counterForIntegerForm, 0, new QTableWidgetItem(QString::number(counterForIntegerForm + 1) + ")"));
                ui->tableWidget_1->setItem(counterForIntegerForm, 1, new QTableWidgetItem(QString::number(counterForIntegerForm)));
                ui->tableWidget_2->setItem(counterForIntegerForm, 0, new QTableWidgetItem(QString::number(counterForIntegerForm + 1) + ")"));
                ui->tableWidget_2->setItem(counterForIntegerForm, 1, new QTableWidgetItem(QString(" ") + QString("a") + QString("^") + QString::number(counterForIntegerForm - 1)));
            }
            counterForIntegerForm++;
        }

        while (counterForLoop < (length - 1))
        {
            ui->tableWidget_3->setItem(counterForLoop + 1, 0, new QTableWidgetItem(QString::number(counterForLoop + 2) + ")"));
            ui->tableWidget_4->setItem(counterForLoop + 1, 0, new QTableWidgetItem(QString::number(counterForLoop + 2) + ")"));

            for (int h = 0; h < n; h++)
            {
                ui->tableWidget_4->setItem(counterForLoop + 1, h + 1, new QTableWidgetItem(QString::number(result[h])));

                if (result[h] != 0)
                {
                    if (result[h] == 1)
                    {
                        if (h != 0)
                        {
                            ui->tableWidget_3->setItem(counterForLoop + 1, h + 1, new QTableWidgetItem("x^" + QString::number(h)));
                        }
                        else
                        {
                            ui->tableWidget_3->setItem(counterForLoop + 1, h + 1, new QTableWidgetItem("1"));
                        }
                    }
                    else
                    {
                        if (h != 0)
                        {
                            ui->tableWidget_3->setItem(counterForLoop + 1, h + 1, new QTableWidgetItem(QString::number(result[h]) + "x^" + QString::number(h)));
                        }
                        else
                        {
                            ui->tableWidget_3->setItem(counterForLoop + 1, h + 1, new QTableWidgetItem(QString::number(result[h])));
                        }
                    }
                }
            }

            for (int i = 0; i < (n + 1); i++)
            {
                intermediate[i + 1] = result[i];

                if (intermediate[n] != 0)
                {
                    for (int j = 0; j < (n + 1); j++)
                    {
                        intermediate[j] -= irreducible[j];

                        if (intermediate[j] < 0)
                        {
                            while (intermediate[j] < 0)
                            {
                                intermediate[j] += p;
                            }
                        }

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

            for (int v = 0; v < (n + 1); v++)
            {
                result[v] = intermediate[v];
            }

            for (int h = 0; h < (n + 1); h++)
            {
                intermediate[h] = 0;
            }

            counterForLoop++;
        }
        ui->tableWidget_1->resizeColumnsToContents();
        ui->tableWidget_2->resizeColumnsToContents();
        ui->tableWidget_3->resizeColumnsToContents();
        ui->tableWidget_4->resizeColumnsToContents();
    }
    catch (const char* ex)
    {
        QMessageBox::warning(this, "Ошибка", ex);
    }
    catch (...)
    {
        QMessageBox::critical(this, "Ошибка", "Неверные данные");
    }
}

