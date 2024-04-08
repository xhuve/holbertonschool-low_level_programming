#include <stdio.h>
#include <stdlib.c>
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

	size = malloc(sizeof(unsigned long int));

	if (index > size)
		return (-1);
	return (n >> index) & 1;
}
