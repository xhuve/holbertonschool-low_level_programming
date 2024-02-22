#include "main.h"

/**
 * print_last_digit - Program entry point
 *
 *
 * Return:  0 on success. Error code otherwise
 */

int print_last_digit(int n)
{
	int d = n % 10;
	if (n >= 0)
	{
		_putchar(d + '0');
		return (d);
	}
	_putchar('0' + (d * -1));
	return (d * -1);
}
