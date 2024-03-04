#include "main.h"
#include <stdio.h>

/**
 * _strbrk - check the code
 * @haystack: pointer
 * @needle: char
 *
 * Return: thing.
 */

char *_strstr(char *haystack, char *needle)
{
	int i, j = 0;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; needle[j] != '\0'; j++)
		{
			if (haystack[i + j] == needle[j] && needle[j + 1] == '\0')
			{
				return (needle);
			}
		}
	}
	return NULL;
}
