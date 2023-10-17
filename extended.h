#ifndef EXTENDED_H
#define EXTENDED_H

#include <QDialog>
#include "extendedBuilding.h"

namespace Ui {
class extended;
}

class extended : public QDialog
{
    Q_OBJECT

public:
    explicit extended(QWidget *parent = nullptr);
    ~extended();

private slots:
    void on_pushButton_clicked();

private:
    Ui::extended *ui;
    extendedBuilding sizeL;
    extendedBuilding irred;
};

#endif // EXTENDED_H
