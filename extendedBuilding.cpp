#include "extendedBuilding.h"

int extendedBuilding::sizeL(int p, int n)
{
    int size = 1;
    for (int i = 0; i < n; i++)
    {
        size *= p;
    }
    return size;
}

QVector<int> extendedBuilding::irreducible(int p, int n)
{

    QVector<int> irreducible(n + 1);

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


