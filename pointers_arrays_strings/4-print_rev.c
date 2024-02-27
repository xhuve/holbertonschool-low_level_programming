#include "main.h"
#include <stdio.h>

/**
 * print_rev - check the code
 * @s: pointer
 *
 * Return: thing.
 */

void print_rev(char *s)
{
	int i;

	for (i = 0; *(s + i) != '\0'; i++)
	{
	}
	for (; i >= 0; i--)
	{
		_putchar(*(s + i));
	}
}
