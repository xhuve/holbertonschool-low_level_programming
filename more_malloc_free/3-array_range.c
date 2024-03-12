#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - check the code
 * @width: char
 * @height: char
 *
 * Return: Always 0.
 */

int *array_range(int min, int max)
{
	int *arr;
	int i;

	if (min > max)
		return (NULL);

	arr = malloc(sizeof(int) * (max - min));
	if (arr == NULL)
	{
		free(arr);
		return (NULL);
	}

	for (i = 0; i < max - min; i++)
	{
		arr[i] = min + i;
		if (arr == NULL)
		{
			free(arr);
			return (NULL);
		}
	}
	return (arr);
}
