#ifndef SIMPLE_H
#define SIMPLE_H

#include <QDialog>
#include "simpleBuilding.h"

namespace Ui {
class simple;
}

class simple : public QDialog
{
    Q_OBJECT

public:
    explicit simple(QWidget *parent = nullptr);
    ~simple();

private slots:
    void on_pushButton_clicked();

private:
    Ui::simple *ui;
    simpleBuilding add;
    simpleBuilding multi;
    simpleBuilding substac;
    simpleBuilding div;

};

#endif // SIMPLE_H
