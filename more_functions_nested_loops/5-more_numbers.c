#include <stdio.h>

/**
 * more_numbers - Entry point
 *
 * Return: Always 0.
 */

void more_numbers(void)
{
	int i;

	for (i = 0; i <= 14; i++)
	{
		if (i >= 10)
			_putchar('0' + i / 10);
		_putchar('0' + i % 10);
	}
	_putchar('\n');
}
