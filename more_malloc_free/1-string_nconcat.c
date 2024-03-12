#include "main.h"
#include <stdlib.h>

/**
 * str_concat - check the code
 * @s1: char
 * @s2: char
 * @n: int
 *
 * Return: Always 0.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *new = "";
	unsigned int i = 0, j, len1 = 0, len2 = 0;

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

	while (i < len1)
	{
		new[i] = s1[i];
		i++;
	}

	if (n >= len2)
		n = len2;
	
	j = 0;

	while (j < n)
	{
		new[i + j] = s2[j];
		j++;
	}

	return (new);
}
