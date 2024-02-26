#include "main.h"
#include <stdio.h>

/**
 * _isdigit - Entry point
 * @c: integer.
 * Return: Always 0.
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	return (0);
}
