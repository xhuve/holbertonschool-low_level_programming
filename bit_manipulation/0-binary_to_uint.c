#include "main.h"
#include <stdio.h>

unsigned int binary_to_uint(const char *b)
{
	int count;
	unsigned int sum = 0, pow = 1;

	if (b == NULL)
		return (0);

	for (count = 0; b[count] != '\0'; count++)
	{
		if (b[count] != '0' && b[count] != '1')
			return (0);
	}

	for (count -= 1; count >= 0; count--)
	{
		if (b[count] == '1')
			sum += pow;
		pow *= 2;
	}

	return (sum);
}


