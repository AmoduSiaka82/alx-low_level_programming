#include <stdio.h>

/**
  * main - Prints combination of numbers
  *
  * Return: 0
  */
int main(void)
{
	int d;
        int i;

	for (d = '0'; d <= '9'; d++)
	{
		for (i = '0'; i <= '9'; i++)
		{
			if (d < i)
			{
				putchar(d);
				putchar(i);

				if (d != '8' || (d == '8' && i != '9'))
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}

	putchar('\n');

	return (0);
}

