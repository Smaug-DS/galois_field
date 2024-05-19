#include "simple.h"
#include "actionSimple.h"
#include "ui_actionSimple.h"

#include <QMessageBox>
#include <QtMath>
#include <QDebug>
#include <QElapsedTimer>
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

        simple check_prime;
        if (!check_prime.is_prime(p)) {
            throw "Число p не является простым";
        }

        if (num1 >= p || num2 >= p)
        {
            throw "Значение равно или превышает модуль";
        }

        QElapsedTimer timer;
        timer.start();

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
            for (int i = 1; i < p; ++i) {
                if ((num2 * i) % p == num1){
                    result = i;
                }
            }

            ui->textEdit_4->setText(ui->textEdit_4->toPlainText() + QString::number(result));
        }

        qDebug() << "Actions simple memory used:" << sizeof(result) << "bytes";
        qDebug() << "Actions simple time used:" << timer.nsecsElapsed() / 1000.0 / 1000.0 << "milliseconds";
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

