#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
* flip_bits - check code
*
* @n: number
* @m: length
* Return: number
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int result;
	unsigned int count = 0;

	result = n ^ m;

	while (result > 0)
	{
		count += result & 1;
		result >>= 1;
	}

	return (count);
}
