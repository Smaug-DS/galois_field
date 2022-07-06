#include "extendedBuilding.h"

int* extendedBuilding::sizeL(int p, int n)
{
	int temp = 1;
	int* size = &temp;
	for (int i = 0; i < n; i++)	//	высчитывание длины 
	{
		*size *= p;
	}
	return size;
}

int* extendedBuilding::irreducible(int p, int n)
{

	int* pIrreducible = new int[n + 1];

	if (p == 2 && n == 2)
	{
		pIrreducible[0] = 1;
		pIrreducible[1] = 1;
		pIrreducible[2] = 1;
	}
	if (p == 2 && n == 3)
	{
		pIrreducible[0] = 1;
		pIrreducible[1] = 1;
		pIrreducible[2] = 0;
		pIrreducible[3] = 1;
	}
	if (p == 2 && n == 4)
	{
		pIrreducible[0] = 1;
		pIrreducible[1] = 1;
		pIrreducible[2] = 0;
		pIrreducible[3] = 0;
		pIrreducible[4] = 1;
	}
	if (p == 2 && n == 5)
	{
		pIrreducible[0] = 1;
		pIrreducible[1] = 0;
		pIrreducible[2] = 1;
		pIrreducible[3] = 0;
		pIrreducible[4] = 0;
		pIrreducible[5] = 1;
	}
	if (p == 2 && n == 6)
	{
		pIrreducible[0] = 1;
		pIrreducible[1] = 1;
		pIrreducible[2] = 0;
		pIrreducible[3] = 0;
		pIrreducible[4] = 0;
		pIrreducible[5] = 0;
		pIrreducible[6] = 1;
	}
	if (p == 3 && n == 2)
	{
		pIrreducible[0] = 2;
		pIrreducible[1] = 1;
		pIrreducible[2] = 1;
	}
	if (p == 3 && n == 3)
	{
		pIrreducible[0] = 1;
		pIrreducible[1] = 2;
		pIrreducible[2] = 0;
		pIrreducible[3] = 1;
	}
	if (p == 5 && n == 2)
	{
		pIrreducible[0] = 3;
		pIrreducible[1] = 1;
		pIrreducible[2] = 1;
	}
	if (p == 5 && n == 5)
	{
		pIrreducible[0] = 1;
		pIrreducible[1] = 1;
		pIrreducible[2] = 1;
		pIrreducible[3] = 1;
		pIrreducible[4] = 1;
		pIrreducible[5] = 1;
	}

	return pIrreducible;
}


