#include <stdio.h>

/**
  * main - Print serie of numbers with commas
  *
  * Return: 0;
  */
int main(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		putchar(i);

		if (c != '9')
		{
			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');

	return (0);
}
