#include "main.h"
#include <stdlib.h>

/**
 * _strdup - check the code
 * @str: char
 *
 * Return: Always 0.
 */

char *_strdup(char *str)
{
	char *dup;
	int i = 0, len = 0;

	if (str == NULL)
		free(dup);
		return (NULL);

	while (str[len] != '\0')
		len++;

	dup = malloc(sizeof(char) * (len + 1));
	if (dup == NULL)
		return (NULL);

	for (i = 0; i < len; i++)
		dup[i] = str[i];

	return (dup);
}
