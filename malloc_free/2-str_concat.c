#include "main.h"
#include <stdlib.h>

/**
 * str_concat - check the code
 * @s1: char
 * @s2: char
 *
 * Return: Always 0.
 */

char *str_concat(char *s1, char *s2)
{
	char *new;
	int i, j, len1 = 0, len2 = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[len1] != '\0')
		len1++;


	while (s2[len2] != '\0')
		len2++;

	new = malloc(sizeof(char) * (len1 + len2 + 1));
	if (new == NULL)
		return (NULL);

	i = 0;

	while (i < len1)
	{
		new[i] = s1[i];
		i++;
	}

	j = 0;
	while (j < len2)
	{
		new[i + j] = s2[j];
		j++;
	}

	return (new);
}
