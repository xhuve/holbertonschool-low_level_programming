#include "main.h"
#include <stdio.h>

/*
 * print_diagsums - check the code
 * @a: pointer
 * @size: array
 *
 * Return: thing.
 */

void print_diagsums(int *a, int size)
{
	int i, sum = 0;

	for (i = 0; i < size; i++)
	{
		sum += *(a + i * (size + 1));
	}
	printf("%d, ", sum);
	sum = 0;
	for (i = 0; i <= size; i++)
	{
		sum += *(a + (i * size) - i);
	}
	printf("%d\n", sum);
}
