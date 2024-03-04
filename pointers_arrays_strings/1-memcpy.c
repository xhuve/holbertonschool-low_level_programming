#include "main.h"
#include <stdio.h>

/**
 * _memcpy - check the code
 * @dest: pointer
 * @src: integer
 * @n: integer
 *
 * Return: thing.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		src[i] = dest[i];
	}

	return (dest);
}
