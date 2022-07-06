#include "simpleBuilding.h"

int** simpleBuilding::addition(int p)
{
	int** pAdd = new int* [p];

	for (int i = 0; i < p; i++)
	{
		pAdd[i] = new int[p];
		for (int j = 0; j < p; j++)
		{
			pAdd[i][j] = (i + j) % p;
		}
	}

	return pAdd;
}

int** simpleBuilding::multiplication(int p)
{
	int** pMulti = new int* [p];

	for (int i = 0; i < p; i++)
	{
		pMulti[i] = new int[p];
		for (int j = 0; j < p; j++)
		{
			pMulti[i][j] = (i * j) % p;
		}
	}

	return pMulti;
}

int** simpleBuilding::subtraction(int p)
{
	int** pSubtrac = new int* [p];

	for (int i = 0; i < p; i++)
	{
		pSubtrac[i] = new int[p];
		for (int j = 0; j < p; j++)
		{
			pSubtrac[i][j] = (i - j);
			if (pSubtrac[i][j] < 0)
			{
				pSubtrac[i][j] += p;
			}
		}
	}

	return pSubtrac;
}

int** simpleBuilding::division(int p)
{

	int** pMulti = multiplication(p);

	int** pDiv = new int* [p];

	for (int i = 0; i < p; i++)
	{
		pDiv[i] = new int[p];
		for (int j = 0; j < p; j++)
		{
			for (int k = 1, g = 0; k < p; k++)
			{
				if (pMulti[j][k] == i)
				{
					g = k;
				}
				pDiv[i][j] = g;
			}
		}
	}

	return pDiv;
}
