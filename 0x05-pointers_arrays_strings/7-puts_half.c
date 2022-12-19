#include "main.h"
/**
 * puts_half - a function that prints half of a string
 * if odd len, n = (length_of_the_string - 1) / 2
 * @str: input
 * Return: half of input
 */
void puts_half(char *str)
{

	int n, m, l;

	l = 0;

	for (n = 0; str[n] != '\0'; n++)
		l++;

	m = (l / 2);

	if ((l % 2) == 1)
		m = ((l + 1) / 2);

	for (n = m; str[n] != '\0'; n++)
		_putchar(str[n]);
	_putchar('\n');
}
