#include "extendedBuilding.h"
#include <QDebug>

qint64 extendedBuilding::pow(qint64 p, qint64 n)
{
    qint64 size = 1;
    for (qint64 i = 0; i < n; i++)
    {
        size *= p;
    }
    return size;
}

std::vector<qint64> extendedBuilding::irreducible(qint64 p, qint64 n)
{
    std::vector<qint64> irreducible(n + 1);

    if (p == 2 && n == 2)
    {
        irreducible[0] = 1;
        irreducible[1] = 1;
        irreducible[2] = 1;
    }
    else if (p == 2 && n == 3)
    {
        irreducible[0] = 1;
        irreducible[1] = 1;
        irreducible[2] = 0;
        irreducible[3] = 1;
    }
    else if (p == 2 && n == 4)
    {
        irreducible[0] = 1;
        irreducible[1] = 1;
        irreducible[2] = 0;
        irreducible[3] = 0;
        irreducible[4] = 1;
    }
    else if (p == 2 && n == 5)
    {
        irreducible[0] = 1;
        irreducible[1] = 0;
        irreducible[2] = 1;
        irreducible[3] = 0;
        irreducible[4] = 0;
        irreducible[5] = 1;
    }
    else if (p == 2 && n == 6)
    {
        irreducible[0] = 1;
        irreducible[1] = 1;
        irreducible[2] = 0;
        irreducible[3] = 0;
        irreducible[4] = 0;
        irreducible[5] = 0;
        irreducible[6] = 1;
    }
    else if (p == 2 && n == 7)
    {
        irreducible[0] = 1;
        irreducible[1] = 0;
        irreducible[2] = 0;
        irreducible[3] = 0;
        irreducible[4] = 0;
        irreducible[5] = 0;
        irreducible[6] = 1;
        irreducible[7] = 1;
    }
    else if (p == 2 && n == 8)
    {
        irreducible[0] = 1;
        irreducible[1] = 0;
        irreducible[2] = 0;
        irreducible[3] = 0;
        irreducible[4] = 1;
        irreducible[5] = 1;
        irreducible[6] = 0;
        irreducible[7] = 1;
        irreducible[8] = 1;
    }
    else if (p == 2 && n == 9)
    {
        irreducible[0] = 1;
        irreducible[1] = 0;
        irreducible[2] = 0;
        irreducible[3] = 0;
        irreducible[4] = 1;
        irreducible[5] = 0;
        irreducible[6] = 0;
        irreducible[7] = 0;
        irreducible[8] = 0;
        irreducible[9] = 1;
    }
    else if (p == 2 && n == 10)
    {
        irreducible[0] = 1;
        irreducible[1] = 0;
        irreducible[2] = 0;
        irreducible[3] = 1;
        irreducible[4] = 0;
        irreducible[5] = 0;
        irreducible[6] = 0;
        irreducible[7] = 0;
        irreducible[8] = 0;
        irreducible[9] = 0;
        irreducible[10] = 1;
    }
    // 11, 12, 13, 14, 15 не указан
    else if (p == 2 && n == 16)
    {
        irreducible[0] = 1;
        irreducible[1] = 1;
        irreducible[2] = 0;
        irreducible[3] = 1;
        irreducible[4] = 0;
        irreducible[5] = 0;
        irreducible[6] = 0;
        irreducible[7] = 0;
        irreducible[8] = 0;
        irreducible[9] = 0;
        irreducible[10] = 0;
        irreducible[11] = 0;
        irreducible[12] = 1;
        irreducible[13] = 0;
        irreducible[14] = 0;
        irreducible[15] = 0;
        irreducible[16] = 1;
    }
    else if (p == 3 && n == 2)
    {
        irreducible[0] = 2;
        irreducible[1] = 1;
        irreducible[2] = 1;
    }
    else if (p == 3 && n == 3)
    {
        irreducible[0] = 1;
        irreducible[1] = 2;
        irreducible[2] = 0;
        irreducible[3] = 1;
    }
    else if (p == 3 && n == 4)
    {
        irreducible[0] = 2;
        irreducible[1] = 1;
        irreducible[2] = 0;
        irreducible[3] = 0;
        irreducible[4] = 1;
    }
    else if (p == 3 && n == 5)
    {
        irreducible[0] = 1;
        irreducible[1] = 2;
        irreducible[2] = 0;
        irreducible[3] = 0;
        irreducible[4] = 0;
        irreducible[5] = 1;
    }
    else if (p == 3 && n == 6)
    {
        irreducible[0] = 2;
        irreducible[1] = 1;
        irreducible[2] = 0;
        irreducible[3] = 0;
        irreducible[4] = 0;
        irreducible[5] = 0;
        irreducible[6] = 1;
    }
    else if (p == 3 && n == 7)
    {
        irreducible[0] = 1;
        irreducible[1] = 0;
        irreducible[2] = 2;
        irreducible[3] = 0;
        irreducible[4] = 0;
        irreducible[5] = 0;
        irreducible[6] = 0;
        irreducible[7] = 1;
    }
    else if (p == 3 && n == 8)
    {
        irreducible[0] = 2;
        irreducible[1] = 0;
        irreducible[2] = 0;
        irreducible[3] = 1;
        irreducible[4] = 0;
        irreducible[5] = 0;
        irreducible[6] = 0;
        irreducible[7] = 0;
        irreducible[8] = 1;
    }
    else if (p == 3 && n == 9)
    {
        irreducible[0] = 1;
        irreducible[1] = 0;
        irreducible[2] = 0;
        irreducible[3] = 0;
        irreducible[4] = 2;
        irreducible[5] = 0;
        irreducible[6] = 0;
        irreducible[7] = 0;
        irreducible[8] = 0;
        irreducible[9] = 1;
    }
    else if (p == 3 && n == 10)
    {
        irreducible[0] = 2;
        irreducible[1] = 1;
        irreducible[2] = 0;
        irreducible[3] = 1;
        irreducible[4] = 0;
        irreducible[5] = 0;
        irreducible[6] = 0;
        irreducible[7] = 0;
        irreducible[8] = 0;
        irreducible[9] = 0;
        irreducible[10] = 1;
    }
    else if (p == 3 && n == 11)
    {
        irreducible[0] = 1;
        irreducible[1] = 0;
        irreducible[2] = 2;
        irreducible[3] = 0;
        irreducible[4] = 0;
        irreducible[5] = 1;
        irreducible[6] = 0;
        irreducible[7] = 0;
        irreducible[8] = 0;
        irreducible[9] = 0;
        irreducible[10] = 0;
        irreducible[11] = 1;
    }
    else if (p == 3 && n == 12)
    {
        irreducible[0] = 2;
        irreducible[1] = 1;
        irreducible[2] = 0;
        irreducible[3] = 0;
        irreducible[4] = 0;
        irreducible[5] = 1;
        irreducible[6] = 0;
        irreducible[7] = 0;
        irreducible[8] = 0;
        irreducible[9] = 0;
        irreducible[10] = 0;
        irreducible[11] = 0;
        irreducible[12] = 1;
    }
    // 13-14 не указан
    else if (p == 3 && n == 15)
    {
        irreducible[0] = 1;
        irreducible[1] = 0;
        irreducible[2] = 2;
        irreducible[3] = 0;
        irreducible[4] = 0;
        irreducible[5] = 0;
        irreducible[6] = 0;
        irreducible[7] = 0;
        irreducible[8] = 0;
        irreducible[9] = 0;
        irreducible[10] = 0;
        irreducible[11] = 0;
        irreducible[12] = 0;
        irreducible[13] = 0;
        irreducible[14] = 0;
        irreducible[15] = 1;
    }
    // 16-19 не указан
    else if (p == 3 && n == 20)
    {
        irreducible[0] = 2;
        irreducible[1] = 1;
        irreducible[2] = 0;
        irreducible[3] = 0;
        irreducible[4] = 0;
        irreducible[5] = 1;
        irreducible[6] = 0;
        irreducible[7] = 0;
        irreducible[8] = 0;
        irreducible[9] = 0;
        irreducible[10] = 0;
        irreducible[11] = 0;
        irreducible[12] = 0;
        irreducible[13] = 0;
        irreducible[14] = 0;
        irreducible[15] = 0;
        irreducible[16] = 0;
        irreducible[17] = 0;
        irreducible[18] = 0;
        irreducible[19] = 0;
        irreducible[20] = 1;
    }
    else if (p == 5 && n == 2)
    {
        irreducible[0] = 3;
        irreducible[1] = 1;
        irreducible[2] = 1;
    }
    else if (p == 5 && n == 5)
    {
        irreducible[0] = 1;
        irreducible[1] = 1;
        irreducible[2] = 1;
        irreducible[3] = 1;
        irreducible[4] = 1;
        irreducible[5] = 1;
    }
    else
    {
        return {};
    }

    return irreducible;
}


