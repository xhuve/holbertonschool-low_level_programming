#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - check code
 * @n: int
 * @seperator: char
 *
 * Return: thing
 */

int print_strings(char *seperator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ap;
	char *curr;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		curr = va_arg(ap, char*);
		if (curr == NULL)
			printf("(nil)");
		else
			printf("%s", curr);

		if (seperator && i != n - 1)
			printf("%s", seperator);
	}

	va_end(ap);
	printf("\n");
	return (0);
}
