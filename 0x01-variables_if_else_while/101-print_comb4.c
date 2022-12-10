#include <stdio.h>

/**
  * main - Prints 3 combination of numbers
  *
  * Return: 0
  */
int main(void)
{
	int d, i, j;

	for (d = '0'; d <= '9'; d++)
	{
		for (i = '0'; i <= '9'; i++)
		{
			for (j = '0'; j <= '9'; j++)
			{
				if (d < i && i < j)
				{
					putchar(d);
					putchar(i);
					putchar(j);

					if (d != '7')
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}

	putchar('\n');

	return (0);
}
