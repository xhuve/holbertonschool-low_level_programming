#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
* get_bit - check code
*
* @n: number
* @index: length
*/
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int size;

	size = sizeof(n) * 8;

	if (index > size)
		return (-1);

	return (n >> index) & 1;
}
