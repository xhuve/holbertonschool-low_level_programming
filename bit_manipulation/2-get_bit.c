#include <stdio.h>
#include "main.h"

int get_bit(unsigned long int n, unsigned int index)
{
	

	return (n >> index) & 1;
}
