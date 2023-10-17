#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:


    void on_simple_clicked();

    void on_extended_clicked();

    void on_actionSimple_clicked();

    void on_actionExtended_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
