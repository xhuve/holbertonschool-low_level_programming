#include "main.h"

/**
 * print_sign - Program entry point
 *
 *
 * Return:  0 on success. Error code otherwise
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	} else if (n == 0)
	{
		_putchar('0');
		return (0);
	} else
	{
		_putchar('-');
		return (-1);
	}
}
