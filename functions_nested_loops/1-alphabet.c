#include "main.h"

/**
 * main - Program entry point
 *
 *
 * Return:  0 on success. Error code otherwise
 */

void print_alphabet(void)
{
	int i;

	for (i = 97; i <= 122; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
