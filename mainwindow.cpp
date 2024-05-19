#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include <QThread>
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
//    ad->write_profile_in_file();
    ad->show();
}


void MainWindow::on_extended_clicked()
{
    extended* ad = new extended();
//    ad->write_profile_in_file();
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

