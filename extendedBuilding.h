#ifndef EXTENDEDBUILDING_H
#define EXTENDEDBUILDING_H

#include <QVector>
#include <vector>

namespace Ui {
class simpleBuilding;
}

class extendedBuilding
{
public:
    qint64 pow(qint64 p, qint64 n);
    std::vector<qint64> irreducible(qint64 p, qint64 n);
};

#endif // EXTENDEDBUILDING_H
