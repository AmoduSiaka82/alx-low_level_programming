#include "main.h"
/**
 * print_last_digit - prints the last digit of a number.
 * Return: The last digit.
 */
int print_last_digit(int n)
{
	int m;

	if (n < 0)
	{
		n = n * -1;
	}
	m = n % 10;
	_putchar(m + '0');
	return (m);
}

