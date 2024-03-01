#include "main.h"
#include <stdio.h>

/**
 * _strncpy - check the code
 * @dest: pointer
 * @src: pointer
 * @n: integer
 *
 * Return: thing.
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i <= n - 1; i++)
	{
		*(dest + i) = *(src + i);
	}

	return (dest);
}
