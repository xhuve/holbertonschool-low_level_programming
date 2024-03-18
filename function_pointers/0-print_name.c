#include <stdio.h>

/**
 * print_name - check da code
 * @name: string
 * @f: function pointer
 *
 * Return: 0 if false, something else otherwise.
 */

void print_name(char *name, void (*f)(char *))
{
	if (f && name)
		f(name);
}

