#include <stdio.h>

/**
 * print_triangle - Entry point
 * @size: lines
 *
 * Return: Always 0.
 */

void print_triangle(int size)
{
	int star, space, row;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}
	for (row = 0; row <= size - 1; row++)
	{
		for (space = 1; space < size - row; space++)
		{
			_putchar(' ');
		}
		for (star = size - row; star <= size; star++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
