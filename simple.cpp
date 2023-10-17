#include "simple.h"
#include "ui_simple.h"

#include <QMessageBox>

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

void simple::on_pushButton_clicked()
{
    try
    {
        int counterNoSimple = 0;
        int p = ui->textEdit->toPlainText().toInt();

        for (int i = 2; i * i <= p; i++)
        {
            if (p % i == 0)
            {
                counterNoSimple++;
            }
        }

        if (counterNoSimple)
        {
            throw "Число не является простым";
        }
        else
        {
            ui->add->setRowCount(p);
            ui->add->setColumnCount(p);
            ui->mult->setRowCount(p);
            ui->mult->setColumnCount(p);
            ui->sub->setRowCount(p);
            ui->sub->setColumnCount(p);
            ui->div->setRowCount(p);
            ui->div->setColumnCount(p);

            QVector<QVector<int>> add_ = add.addition(p);

            for (int i = 0; i < p; i++)
            {
                for (int j = 0; j < p; j++)
                {
                    QTableWidgetItem *item = new QTableWidgetItem(QString::number(add_[i][j]));
                    ui->add->setItem(i, j, item);
                }
            }

            QVector<QVector<int>> mult_ = multi.multiplication(p);

            for (int i = 0; i < p; i++)
            {
                for (int j = 0; j < p; j++)
                {
                    QTableWidgetItem *item = new QTableWidgetItem(QString::number(mult_[i][j]));
                    ui->mult->setItem(i, j, item);
                }
            }

            QVector<QVector<int>> sub_ = substac.subtraction(p);

            for (int i = 0; i < p; i++)
            {
                for (int j = 0; j < p; j++)
                {
                    QTableWidgetItem *item = new QTableWidgetItem(QString::number(sub_[i][j]));
                    ui->sub->setItem(i, j, item);
                }
            }

            QVector<QVector<int>> div_ = div.division(p);

            for (int i = 0; i < p; i++)
            {
                for (int j = 0; j < p; j++)
                {
                    QTableWidgetItem *item = new QTableWidgetItem(QString::number(div_[i][j]));
                    ui->div->setItem(i, j, item);
                }
            }
        }
        ui->add->resizeColumnsToContents();
        ui->sub->resizeColumnsToContents();
        ui->mult->resizeColumnsToContents();
        ui->div->resizeColumnsToContents();
    }
    catch (const char* ex)
    {
        QMessageBox::critical(this, "Ошибка", "Число не является простым");
    }
    catch (...)
    {
        QMessageBox::critical(this, "Ошибка", "Не удалось обработать входные данные");
        ui->textEdit->clear();
    }
}

