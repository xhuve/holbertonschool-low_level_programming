#include "main.h"
#include <stdio.h>

/**
 * _strncat - check the code
 * @dest: pointer
 * @src: pointer
 * @n: integer
 *
 * Return: thing.
 */

char *_strncat(char *dest, char *src, int n)
{
	int dlen, i;

	for (i = 0; *(dest + i) != '\0'; i++)
	{
		dlen = i;
	}

	if (dlen < n)
	{
		n = dlen;
	}

	for (i = 0; i < n; i++)
	{
		*(dest + i + dlen + 1) = *(src + i);
		if (i == n - 1)
			*(dest + i + dlen + 1) = '\0';
	}

	return (dest);
}
