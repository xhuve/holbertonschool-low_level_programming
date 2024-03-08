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
	int i, j, sum = 0, a;

	if (argc < 2)
	{
		return (1);
	}

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (argv[i][j] < '0' || argv[i][j] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
		a = atoi(argv[i]);
		sum += a;
	}
	printf("%d\n", sum);

	return (0);
}
