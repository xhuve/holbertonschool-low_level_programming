#include "main.h"
#include <stdio.h>

/**
 * _strchr - check the code
 * @s: pointer
 * @c: char
 *
 * Return: thing.
 */

char *_strchr(char *s, char c)
{
	unsigned int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			return (s[i]);
		}
	}

	return (NULL);
}
