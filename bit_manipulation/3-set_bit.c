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

	*n = *n | (1 << index);

	return (*n);
}
