#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - check the code
 * @b: int
 *
 * Return: Always 0.
 */

void *malloc_checked(unsigned int b)
{
	unsigned int *array = malloc(sizeof(b) * b);

	if (array == NULL || b == 0)
		exit(98);

	return (array);
}
