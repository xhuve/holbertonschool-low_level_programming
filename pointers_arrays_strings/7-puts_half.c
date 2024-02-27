#include "main.h"

/**
 * puts_half - check the code 
 * @str: pointer
 *
 * Return: thing.
 */

void puts_half(char *str) 
{
	int i, len;
	
	for (i = 0; *(str + i) != '\0'; i++)
	{
		len = i;
	}

	if (i % 2 == 0)
	{
		i /= 2;
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
