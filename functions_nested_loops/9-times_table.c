#include "main.h"

/**
 * times_table - Program entry point
 *
 *
 * Return:  0 on success. Error code otherwise
 */

void times_table(void)
{
	int i, j, sum, first;
	
		for (i = 0; i < 10; i++)
		{
			for (j = 0; j < 10; j++)
			{
				sum = i * j;
				first = sum;
				if (sum >= 10)
				{
					while(first >= 10)
					{
						first /= 10;
					}
					_putchar('0' + first);
				} else
				{
					_putchar(' ');
				}
				_putchar('0' + (sum % 10));
				if (j != 9)
				{
					_putchar(',');
					_putchar(' ');
				}
			}
			_putchar('\n');
		}
}
