#include "main.h"
/**
 * main - prints the string "School" from a character array.
 * Return: 0
 */
int main(void)
{
	char c[] = "School";
	int i;

	for (i = 0; i < 6; i++)
	{
		_putchar(c[i]);
	}
	_putchar('\n');
	return (0);
}
