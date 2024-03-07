#include "main.h"
#include <stdio.h>

/**
 * _strstr - check the code
 * @haystack: pointer
 * @needle: char
 *
 * Return: thing.
 */

char *_strstr(char *haystack, char *needle)
{
	int i, j, len = 0, count = 0;

	for (j = 0; needle[j] != '\0'; j++)
	{
		len = j;
	}

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; j < len; j++)
		{
			if (haystack[i + j] == needle[j])
			{
				count++;
			}
			if (count == len)
			{
				return (haystack + (i));
			}
			count = 0;
		}
	}
	return (NULL);
}
