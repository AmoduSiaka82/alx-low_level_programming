#include "main.h"

/**
 * leet - Entry point
 * ONE if, TWO loops only
 * @n: input
 * Return: 0
 */
char *leet(char *n)
{
	int i, x;
	int fnd[] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	int replc[] = {'4', '3', '0', '7', '1'};

	for (i = 0; n[i] != '\0'; i++)
	{
		for (x = 0; x <= 9; x++)
		{
			if (n[i] == fnd[x])
			{
				n[i] = replc[x / 2];
				x = 9;
			}
		}
	}

	return (n);
}
