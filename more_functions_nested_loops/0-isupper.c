#include <stdio.h>

/**
 * _isupper - Entry point
 * @c: integer
 * Return: Always 0.
 */

int _isupper(int c)
{
	if (c <= 90 && c >= 65)
		return (1);
	return (0);
}
