#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include <QDebug>

#include "simple.h"
#include "extended.h"
#include "actionSimple.h"
#include "actionExtended.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_simple_clicked()
{
    simple* ad = new simple();
    ad->show();
}


void MainWindow::on_extended_clicked()
{
    extended* ad = new extended();
    ad->show();
}


void MainWindow::on_actionSimple_clicked()
{
    actionSimple* ad = new actionSimple();
    ad->show();
}


void MainWindow::on_actionExtended_clicked()
{
    actionExtended* ad = new actionExtended();
    ad->show();
}

