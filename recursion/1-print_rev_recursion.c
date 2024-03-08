#include "main.h"

/**
 * _print_rev_recursion - check the code
 * @s: string.
 *
 * Return: Always 0.
 */
void _print_rev_recursion(char *s)
{
	if (*(s + 1) == '\0')
	{
		_putchar(*s);
		return;
	}
	_print_rev_recursion(s + 1);
	_putchar(*s);
}
