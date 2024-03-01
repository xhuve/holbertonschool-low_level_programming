#include "main.h"
#include <stdio.h>

/**
 * reverse_array - check the code
 * @a: pointer
 * @n: pointer
 *
 * Return: thing.
 */

void reverse_array(int *a, int n)
{
	int i, j = n - 1;

	for (i = 0; i < n / 2; i++)
	{
		int tmp = a[i];
		a[i] = a[j];
		a[j] = tmp;
		j--;
	}
}
