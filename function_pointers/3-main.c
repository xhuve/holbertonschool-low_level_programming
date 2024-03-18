#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - check code
 *
 * Return: thing
 */

int main (int argc, char *argv[])
{
	int (*func)(int, int);
	char *arg = argv[2];

	if (argc > 4)
	{
		printf("Error\n");
		exit(98);
	}

	if (atoi(argv[3]) == 0 && (arg[0] == '/' || arg[0] == '%'))
	{
		printf("Error\n");
		exit(100);
	}

	func = get_op_func(arg);
	
	if (!func || arg[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}


	printf("%d\n", func(atoi(argv[1]), atoi(argv[3])));
	return (0);
}
