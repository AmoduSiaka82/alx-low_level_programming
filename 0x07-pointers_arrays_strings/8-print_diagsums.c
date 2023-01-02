#include "main.h"

/**
 * print_diagsums - Entry point
 * Desc: Entry
 *@a: pointer
 *@size: value
 * Return: 0
 */
void print_diagsums(int *a, int size)
{
	int i;
	int j;
	int dgr = 0;
	int dgl = 0;
	int k;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			k = (i * size) + j;
			if (i == j)
			{
				dgr = dgr + a[k];
			}
			if ((i + j) == (size - 1))
			{
				dgl = dgl + a[k];
			}
		}
	}
	printf("%d, %d\n", dgr, dgl);
}
