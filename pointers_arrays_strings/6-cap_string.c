#include "main.h"
#include <stdio.h>

/**
 * cap_string - check the code
 * @s: pointer
 *
 * Return: thing.
 */

char *cap_string(char *s)
{
	int i, j;
	char *list[13] = { "\n", "\t", " ", ".", ",", ";", "!", "?", "\"", "(", ")", "{", "}" };
	int list_len = 12;
	
	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j <= list_len; j++)
		{
			if (s[i - 1] == *list[j] && (s[i] >= 97 && s[i] <= 122))
			{
				s[i] -= 32;
			}
		}
	}
	return (s);
}
