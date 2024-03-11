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
		return (NULL);

	while (str[len] != '\0')
		len++;

	dup = malloc(sizeof(char) * len);

	for (i = 0; i < len; i++)
		dup[i] = str[i];

	return (dup);
}
