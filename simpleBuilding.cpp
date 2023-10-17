#include "simpleBuilding.h"

QVector<QVector<int>> simpleBuilding::addition(int p)
{
    QVector<QVector<int>> add(p, QVector<int>(p));

    for (int i = 0; i < p; i++)
    {
        for (int j = 0; j < p; j++)
        {
            add[i][j] = (i + j) % p;
        }
    }

    return add;
}

QVector<QVector<int>> simpleBuilding::multiplication(int p)
{
    QVector<QVector<int>> multi(p, QVector<int>(p));

    for (int i = 0; i < p; i++)
    {
        for (int j = 0; j < p; j++)
        {
            multi[i][j] = (i * j) % p;
        }
    }

    return multi;
}

QVector<QVector<int>> simpleBuilding::subtraction(int p)
{
    QVector<QVector<int>> subtrac(p, QVector<int>(p));

    for (int i = 0; i < p; i++)
    {
        for (int j = 0; j < p; j++)
        {
            subtrac[i][j] = (i - j);
            if (subtrac[i][j] < 0)
            {
                subtrac[i][j] += p;
            }
        }
    }

    return subtrac;
}

QVector<QVector<int>> simpleBuilding::division(int p)
{
    QVector<QVector<int>> div(p, QVector<int>(p));
    QVector<QVector<int>> multi = multiplication(p);

    for (int i = 0; i < p; i++)
    {
        for (int j = 0; j < p; j++)
        {
            for (int k = 1, g = 0; k < p; k++)
            {
                if (multi[j][k] == i)
                {
                    g = k;
                }
                div[i][j] = g;
            }
        }
    }

    return div;
}
