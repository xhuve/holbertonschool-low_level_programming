#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - Program entry point
 * @n: number
 *
 * Return:  0 on success. Error code otherwise
 */

void print_to_98(int n)
{
	if (n > 98)
	{	
		for (; n >= 98; n--)
		{
			printf("%d", n);
			if (n != 98)
			{
				printf(", ");
			}	
		}
		putchar('\n');
	} 
	else
	{
		for (; n <= 98; n++)
		{
			printf("%d", n);
			if (n != 98)
			{
				printf(", ");
			}	
		}
		putchar('\n');
	}

}
