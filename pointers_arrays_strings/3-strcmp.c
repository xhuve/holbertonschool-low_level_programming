#include "main.h"
#include <stdio.h>

/**
 * _strcmp - check the code
 * @s1: pointer
 * @s2: pointer
 *
 * Return: thing.
 */

int _strcmp(char *s1, char *s2)
{
	int s1len, i;

	for (i = 0; *(s1 + i) != '\0'; i++)
	{
		s1len = i;
	}


	for (i = 0; i < s1len; i++)
	{
		if (*(s1 + i) < *(s2 + i))
			return (*(s1 + i) - *(s2 + i));
		else if (*(s1 + i) > *(s2 + i))
			return ((*(s2 + i) - *(s1 + i)) * -1);
	}

	return (0);
}
