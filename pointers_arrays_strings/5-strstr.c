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
	int i, j = 0, len = 0, inlen;

	for (j = 0; needle[j] != '\0'; j++)
	{
		inlen = j;
	}

	for (i = 0; haystack[i] != '\0'; i++)
	{
		if (haystack[i] == needle[0])
		{
			for (j = 0; needle[j] != '\0'; j++)
			{
				len++;
				if (len == inlen)
				{
					return (needle);
				}
			}
		}
	}
	return NULL;
}
