#include "main.h"
#include <stdlib.h>

/**
 * array_range - check the code
 * @min: integer
 * @max: integer
 *
 * Return: Always 0.
 */

int *array_range(int min, int max)
{
	int *arr;
	int i;

	if (min > max)
		return (NULL);

	arr = malloc(sizeof(int) * (max - min + 1));
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
