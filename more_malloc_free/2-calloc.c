#include "main.h"
#include <stdlib.h>

/**
 * _calloc - check the code
 * @nmemb: number of indices
 * @size: bytes per element
 *
 * Return: Always 0.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *new;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	new = malloc(nmemb * size + 1);
	if (new == NULL)
		return (NULL);

	i = 0;

	while (i < nmemb * size)
	{
		new[i] = 0;
		i++;
	}

	return (new);
}
