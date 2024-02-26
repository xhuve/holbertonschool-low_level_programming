#include "main.h"
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

	if (n <= 0)
	{
		_putchar('\n');
		return;
	}

	for (slash = 0; slash < n; slash++)
	{
		for (space = 0; space < slash; space++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
}
