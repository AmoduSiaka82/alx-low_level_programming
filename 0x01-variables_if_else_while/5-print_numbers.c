#include <stdio.h>

/**
  * main - Prints the numbers since 0 to 9
  *
  * Return:0 
  */
int main(void)
{
	char k;

	for (k = '0'; k <= '9'; k++)
	{
		putchar(k);
	}

	putchar('\n');

	return (0);
}
