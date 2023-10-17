#ifndef SIMPLEBUILDING_H
#define SIMPLEBUILDING_H

#include <QVector>

namespace Ui {
class simpleBuilding;
}

class simpleBuilding
{
public:
    QVector<QVector<int>> addition(int p);
    QVector<QVector<int>> multiplication(int p);
    QVector<QVector<int>> subtraction(int p);
    QVector<QVector<int>> division(int p);
};

#endif // SIMPLEBUILDING_H
