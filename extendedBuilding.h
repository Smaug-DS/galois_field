#ifndef EXTENDEDBUILDING_H
#define EXTENDEDBUILDING_H

#include <QVector>

namespace Ui {
class simpleBuilding;
}

class extendedBuilding
{
public:
    int sizeL(int p, int n);
    QVector<int> irreducible(int p, int n);
};

#endif // EXTENDEDBUILDING_H
