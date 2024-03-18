#include <stdio.h>

/**
 * int_index - check da code
 * @array: array
 * @size: int
 * @cmp: function pointer
 *
 * Return: 0 if false, something else otherwise.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0) return (-1);

	if (cmp && array)
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]))
				return (i);
		}
	return (-1);
}

