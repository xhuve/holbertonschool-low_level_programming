#include "main.h"

/**
 * rev_string - check the code
 * @s: pointer
 *
 * Return: thing.
 */

void rev_string(char *s)
{
	int i, j = 0, len = 0;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		len = i;
	}

	for (i = len; i - 1 >= len / 2; i--)
	{
		char tmp = *(s + j);
		*(s + j) = *(s + i);
		*(s + i) = tmp;
		j++;
	}
}
