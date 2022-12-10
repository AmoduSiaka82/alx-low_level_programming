#include <stdio.h>

/**
  * main - Prints the numbers from 00 to 99
  *
  * Return: 0
  */
int main(void)
{
	int d;
        int i;

	d = i = '0';

	for (d = '0'; d <= '9'; d++)
	{
		for (i = '0'; i <= '9'; i++)
		{
			putchar(d);
			putchar(i);

			if ((d != '9') || (d == '9' && i != '9'))
			{
				putchar(',');
				putchar(' ');
			}
		}
	}

	putchar('\n');

	return (0);
}
