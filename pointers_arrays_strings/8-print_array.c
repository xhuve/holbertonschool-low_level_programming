#include "main.h"
#include <stdio.h>

/**
 * print_array - check the code
 * @a: pointer
 * @n: integer
 *
 * Return: thing.
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i <= n - 1; i++)
	{
		printf("%d, ", *(a + i));
	}
	printf("\n");
}
