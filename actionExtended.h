#ifndef ACTIONEXTENDED_H
#define ACTIONEXTENDED_H

#include <QDialog>

#include "extendedBuilding.h"

namespace Ui {
class actionExtended;
}

class actionExtended : public QDialog
{
    Q_OBJECT

public:
    explicit actionExtended(QWidget *parent = nullptr);
    ~actionExtended();

private slots:
    void on_pushButton_clicked();

private:
    Ui::actionExtended *ui;
    extendedBuilding sizeL;
    extendedBuilding irred;
};

#endif // ACTIONEXTENDED_H
