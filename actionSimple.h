#ifndef ACTIONSIMPLE_H
#define ACTIONSIMPLE_H

#include <QDialog>

#include "simpleBuilding.h"

namespace Ui {
class actionSimple;
}

class actionSimple : public QDialog
{
    Q_OBJECT

public:
    explicit actionSimple(QWidget *parent = nullptr);
    ~actionSimple();

private slots:
    void on_pushButton_clicked();

private:
    Ui::actionSimple *ui;
    simpleBuilding multi;
    simpleBuilding div;
};

#endif // ACTIONSIMPLE_H
