#include "actionSimple.h"
#include "ui_actionSimple.h"

#include <QMessageBox>
#include <QtMath>
#include <QIntValidator>

actionSimple::actionSimple(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::actionSimple)
{
    ui->setupUi(this);
    ui->comboBox->addItems({ "сложение", "умножение", "вычитание", "деление" });
}

actionSimple::~actionSimple()
{
    delete ui;
}

void actionSimple::on_pushButton_clicked()
{
    try
    {
        if (ui->textEdit_1->toPlainText() == "" ||
            ui->textEdit_2->toPlainText() == "" ||
            ui->textEdit_3->toPlainText() == "")
        {
            throw "Отсутствуют значения на ввод или операнды";
        }

        ui->textEdit_4->setText("");
        int num1, num2, result, p;

        p = ui->textEdit_1->toPlainText().toInt();
        num1 = ui->textEdit_2->toPlainText().toInt();
        num2 = ui->textEdit_3->toPlainText().toInt();

        QIntValidator* intValidator = new QIntValidator(0, 1000, this);

        QString textP = ui->textEdit_1->toPlainText();
        QString textNum1 = ui->textEdit_2->toPlainText();
        QString textNum2 = ui->textEdit_3->toPlainText();

        int pos = 0;

        if (!intValidator->validate(textP, pos) ||
            !intValidator->validate(textNum1, pos) ||
            !intValidator->validate(textNum2, pos))
        {
            throw 404;
        }

        int counterNoSimple = 0;

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

        if (num1 >= p || num2 >= p)
        {
            throw "Значение равно или превышает модуль";
        }

        for (int i = 2; i < qSqrt(p); i++)
        {
            if (p % i == 0)
            {
                counterNoSimple++;
            }
        }

        if (counterNoSimple)
        {
            throw "Числа не являются взаимно простыми для данного модуля";
        }

        QVector<QVector<int>> tempMulti = multi.multiplication(p);
        QVector<QVector<int>> tempDiv = div.division(p);

        if (ui->comboBox->currentText() == "сложение")
        {
            result = (num1 + num2) % p;
            ui->textEdit_4->setText(ui->textEdit_4->toPlainText() + QString::number(result));
        }

        if (ui->comboBox->currentText() == "умножение")
        {
            result = (num1 * num2) % p;
            ui->textEdit_4->setText(ui->textEdit_4->toPlainText() + QString::number(result));
        }

        if (ui->comboBox->currentText() == "вычитание")
        {
            result = (num1 - num2);

            if (result < 0)
            {
                result += p;
            }

            ui->textEdit_4->setText(ui->textEdit_4->toPlainText() + QString::number(result));
        }

        if (ui->comboBox->currentText() == "деление")
        {
            for (int i = 1; i < p; i++)
            {
                for (int j = 1; j < p; j++)
                {
                    for (int k = 1, g = 0; k < p; k++)
                    {
                        if (tempMulti[j][k] == i)
                        {
                            g = k;
                        }
                        tempDiv[i][j] = g;
                    }
                }
            }

            result = tempDiv[num1][num2];

            ui->textEdit_4->setText(ui->textEdit_4->toPlainText() + QString::number(result));
        }
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

