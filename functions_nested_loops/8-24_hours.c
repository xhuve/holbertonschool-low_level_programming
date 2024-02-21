#include "main.h"

/**
 * jack_bauer - Program entry point
 *
 *
 * Return:  0 on success. Error code otherwise
 */

void jack_bauer(void)
{
	char i, j, l, m;

	for (i = 48; i <= 50; i++)
	{
		for (j = 48; j <= 57; j++)
		{
			for (l = 48; l < 54; l++)
			{
				for (m = 48;  m <= 57; m++)
				{
					_putchar(i);
					_putchar(j);
					_putchar(':');
					_putchar(l);
					_putchar(m);
					_putchar('\n');
					if (i == 50 && j == 51 && l == 53 && m == 57)
					{
						return;
					}
				}
			}
		}
	}
}
