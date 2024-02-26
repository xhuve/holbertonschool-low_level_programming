#include <stdio.h>

/**
 * print_diagonal - Entry point
 * @n: lines
 *
 * Return: Always 0.
 */

void print_diagonal(int n)
{
	int space, slash;

	for (slash = 0; slash < n; slash++)
	{
		for (space = 0; space < slash; space++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
	_putchar('\n');
}
