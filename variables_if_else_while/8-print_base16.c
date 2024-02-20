#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/**
 * main - Program entry point
 *
 *
 *
 * Return:  0 on success. Error code otherwise
 */
int main(void)
{
	char ch;

	for (ch = 48; ch <= 102; ch++)
	{
		putchar(ch);
		if (ch == 57)
		{
			ch = 96;
		}
	}
	putchar('\n');
	return (0);
}
