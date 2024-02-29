#include "main.h"
#include <stdio.h>

/**
 * _atoi - check the code
 * @s: pointer
 *
 * Return: thing.
 */

int _atoi(char *s)
{
	int i, len = 0, num = 0, digit = 1;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		len = i;
	}

	for (i = len; i >= 0; i--)
	{
		if (s[i] >= '0' && s[i] <= '9')
		{
			num = num + (digit * (s[i] - '0'));
			if (s[i - 1] == '-')
			{
				return (num * -1);
			} else if (s[i - 1] > '9' || s[i - 1] < '0')
			{
				return (num);
			}
			digit *= 10;
		}
	}
	return (0);
}
