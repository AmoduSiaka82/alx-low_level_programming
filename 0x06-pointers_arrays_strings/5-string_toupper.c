#include "holberton.h"

/**
 * string_toupper - a function that changes all lower of a string to upper
 * @n: input string
 * Return: capitialized string
 */
char *string_toupper(char *n)
{
	int i = 0;

	for (; n[i] != '\0'; )
	{
		if (n[i] >= 'a' && n[i] <= 'z')
			n[i] = n[i] - 32;
		 i++
	}
	return (n);
}
