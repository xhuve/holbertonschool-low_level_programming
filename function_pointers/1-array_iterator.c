#include <stdio.h>

/**
 * array_iterator - check da code
 * @array: array
 * @size: int
 * @action: function pointer
 *
 * Return: 0 if false, something else otherwise.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (action && array)
		for (i = 0; i < size; i++)
			action(array[i]);
}

