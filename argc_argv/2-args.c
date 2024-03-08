#include <stdio.h>

/**
 * main - check the code
 * @argc: integer.
 * @argv: pointer.
 *
 * Return: thing.
 */

int main(int argc, char **argv)
{
	while (argc--)
	{
		printf("%s\n", *argv++);
	}

	return (0);
}
