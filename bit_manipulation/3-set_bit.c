#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
* set_bit - check code
*
* @n: number
* @index: length
* Return: number
*/
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int size = 0;

	size = sizeof(n) * 8;
	if (index > size)
		return (-1);


	*n = *n | (1 << index);

	return (1);
}
