#include "main.h"
#include <stdio.h>

/**
 * _strpbrk - check the code
 * @s: pointer
 * @accept: char
 *
 * Return: thing.
 */

char *_strpbrk(char *s, char *accept)
{
	int i, j = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				return (s + i);
			}
		}
	}
	return (NULL);
}
