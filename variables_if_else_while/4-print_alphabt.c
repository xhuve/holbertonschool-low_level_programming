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
	int i;
	for(i = 97; i <= 122; i++){
		if (i == 113 || i == 101) {
			continue;
		}
		putchar(i);
	}
	putchar('\n');
	return (0);
}
