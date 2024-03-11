#include "main.h"
#include <stdlib.h>

/**
 * create_array - check the code
 * @size: int
 * @c: char
 *
 * Return: Always 0.
 */

char *create_array(unsigned int size, char c)
{
	char *array = malloc(sizeof(c) * size);
	unsigned int i;

	if (array == NULL || size == 0)
		return (NULL);

	for (i = 0; i < size; i++)
		array[i] = c;

	return (array);
}
