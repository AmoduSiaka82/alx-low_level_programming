#include <unistd.h>

/**
 * _putchar -write the character c to stdout
 * @c: The character to print
 *
 * Return: 1.
 * On error, -1 is reurned
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
