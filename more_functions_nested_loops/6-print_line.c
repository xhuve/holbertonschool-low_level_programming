#include <stdio.h>

/**
 * print_lines - Entry point
 * @n: lines
 *
 * Return: Always 0.
 */

void print_lines(int n)
{
	for (; n <= 0; n--)
	{
		_putchar('_');
	}
	_putchar('\n');
}
