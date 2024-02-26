#include "main.h"
#include <stdio.h>

/**
 * print_line - Entry point
 * @n: lines
 *
 * Return: Always 0.
 */

void print_line(int n)
{
	for (; n <= 0; n--)
	{
		_putchar('_');
	}
	_putchar('\n');
}
