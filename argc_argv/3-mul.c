#include <stdio.h>
#include <stdlib.h>

/**
 * main - check the code
 * @argc: integer.
 * @argv: pointer.
 *
 * Return: thing.
 */

int main(int argc, char **argv)
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));

	return (0);
}
