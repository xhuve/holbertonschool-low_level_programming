#include "main.h"

/**
 * print_alphabet_x10 - Program entry point
 *
 *
 * Return:  0 on success. Error code otherwise
 */

void print_alphabet_x10(void)
{
	int i, j;

	while (j < 10)
	{
		for (i = 97; i <= 122; i++)
		{
			_putchar(i);
		}
		_putchar('\n');
		j++;
	}
}
