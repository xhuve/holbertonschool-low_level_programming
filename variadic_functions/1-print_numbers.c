#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - check code
 * @n: int
 * @seperator: char
 *
 * Return: thing
 */

int print_numbers(char *seperator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ap;

	if (n == 0)
	{
		return (0);
	}

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(ap, int));
		if (seperator && i != n - 1)
			printf("%s", seperator);
	}

	va_end(ap);
	printf("\n");
	return (0);
}
