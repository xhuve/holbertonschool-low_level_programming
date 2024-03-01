#include "main.h"
#include <stdio.h>

/**
 * _strcat - check the code
 * @dest: pointer
 * @src: integer
 *
 * Return: thing.
 */

char *_strcat(char *dest, char *src)
{
	int slen, dlen, i;

	for (i = 0; *(src + i) != '\0'; i++)
	{
		slen = i;
	}
	for (i = 0; *(dest + i) != '\0'; i++)
	{
		dlen = i;
	}
	for (i = 0; i <= slen; i++)
	{
		*(dest + i + dlen + 1) = *(src + i);
	}
	*(dest + i + dlen + 1) = '\0';

	return (dest);
}
