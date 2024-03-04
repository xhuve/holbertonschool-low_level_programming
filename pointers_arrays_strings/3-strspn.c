#include "main.h"
#include <stdio.h>

/**
 * _strspn - check the code
 * @s: pointer
 * @accept: char
 *
 * Return: thing.
 */

unsigned int _strspn(char *s, char *accept)
{
	int i, j = 0, len = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				len++;
				break;
			}
			if (accept[j + 1] == '\0')
			{
				return (len);
			}
		}
	}
	return (len);
}
