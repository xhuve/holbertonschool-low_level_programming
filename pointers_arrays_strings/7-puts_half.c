#include "main.h"

/**
 * puts_half - check the code
 * @str: pointer
 *
 * Return: thing.
 */

void puts_half(char *str)
{
	int i, len = 0;

	for (i = 0; *(str + i) != '\0'; i++)
	{
		len = i;
	}

	if (len == 0)
	{
		return;
	}

	if (len % 2 == 0)
	{
		i = len / 2;
	} else
	{
		i = (len - 1) / 2;
	}

	for (; i <= len; i++)
	{
		_putchar(*(str + i));
	}
	_putchar('\n');
}
