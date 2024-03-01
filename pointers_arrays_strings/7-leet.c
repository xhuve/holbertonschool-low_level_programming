#include "main.h"
#include <stdio.h>

/**
 * leet - check the code
 * @s: pointer
 *
 * Return: thing.
 */

char *leet(char *s)
{
	int i, j;
	char *list = "aAeEoOtTlL";
	char *num[5] = {"4", "3", "0", "7", "1"};
	int list_len = 7;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j <= list_len; j++)
		{
			if (s[i] == list[j])
			{
				s[i] = *num[j / 2];
			}
		}
	}
	return (s);
}
