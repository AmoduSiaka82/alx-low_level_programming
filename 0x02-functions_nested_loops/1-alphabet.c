#include "main.h"
/**
 * print_alphabet - prints an alphabet from a-z.
 * Return: Nothing.
 */
void print_alphabet(void)
{
	char u;

	for (u = 'a'; u <= 'z'; u++)
	{
		_putchar(u);
	}
	_putchar('\n');
}
