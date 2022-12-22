#include "holberton.h"

/**
  * _strncat - Concatenates two strings
  * @dest: The destination value
  * @src: The source value
  * @n: The limit of the concatenation
  *
  * Return: A pointer to string dest
  */
char *_strncat(char *dest, char *src, int n)
{
	int dln = 0, j = 0;

	while (dest[dln])
	{
		dln++;
	}

	while (j < n && src[j])
	{
		dest[dlen] = src[j];
		dln++;
		j++;
	}

	dest[dln + n + 1] = '\0';

	return (dest);
}
