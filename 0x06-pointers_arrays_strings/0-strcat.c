#include "main.h"
#include <stdio.h>

/**
  * _strcat - Concatenates two strings
  * @dest: The destination string
  * @src: The source string
  *
  * Return: string dest
  */
char *_strcat(char *dest, char *src)
{
	int dln = 0, i;

	while (dest[dln])
	{
		dln++;
	}

	for (i = 0; src[i] != 0; i++)
	{
		dest[dln] = src[i];
		dln++;
	}

	dest[dln] = '\0';
	return (dest);
}
