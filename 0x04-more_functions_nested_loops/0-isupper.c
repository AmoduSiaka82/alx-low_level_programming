#include "main.h"

/**
 * _isupper - a function that checks for uppercase character
 * @c: input
 * Return: 1 if c is uppercase, 0 otherwise
 */
int _isupper(int c)
{
	for (c = 'A'; c <= 'Z'; c++)
	{
	if ((c >= 'A') && (c <= 'Z'))
		return (1);
	else
		return (0);
	}
}
