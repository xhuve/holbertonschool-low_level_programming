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
	unsigned int i, j = 0;
	va_list ap;

	if (n == 0)
	{
		return (0);
	}

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(ap, int));
		while (seperator[j] != '\0' && i != n - 1)
			printf("%c", seperator[j++]);
		j = 0;
	}

	va_end(ap);
	printf("\n");
	return (0);
}
