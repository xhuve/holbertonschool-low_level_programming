#include "main.h"
#include <stdio.h>

/**
 * print_square - Entry point
 * @size: lines
 *
 * Return: Always 0.
 */

void print_square(int size)
{
	int length = 0, width;

	do {
		for (width = 0; width < size; width++)
		{
			_putchar('#');
		}
		_putchar('\n');
		length++;
	} while (length < size);
}
