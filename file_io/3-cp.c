#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include <stdio.h>

int _strlen(char *str)
{
	int length = 0; 

	while (str[length++] != '\0');

	return (length);
}

/**
* main - check code
*
* @ac: argument count
* @av: pointer
*
* Return: int
*/
int main(int ac, char **av)
{
	int file_from, file_to, readfd, writefd, closefd;
	char *buffer;

	if (ac != 3)
	{
		write(STDERR_FILENO, "Usage: cp file_from file_to\n", 28);
		exit(97);
	}

	buffer = malloc(sizeof(char) * 1024);

	file_from = open(av[1], O_RDONLY);
	if (file_from == -1)
	{
		write(STDERR_FILENO, "Error: Can't read from file", 27);
		write(STDERR_FILENO, av[1], _strlen(av[1]));
		putchar('\n');
		exit(98);
	}

	file_to = open(av[2], O_RDWR | O_CREAT, 0664);
	if (file_to == -1)
	{
		write(STDERR_FILENO, "Error: Can't write to", 21);
		write(STDERR_FILENO, av[2], _strlen(av[2]));
		putchar('\n');
		exit(99);
	}

	while ((readfd = read(file_from, buffer, 1024)) > 0)
	{
		writefd = write(file_to, buffer, readfd);
		if (writefd == -1)
			return (-1);
	}

	closefd = close(file_from);
	if (closefd == -1)
	{
		write(STDERR_FILENO, "Error: Can't close fd FD_VALUE\n", 31);
		exit(100);
	}

	closefd = close(file_to);
	if (closefd == -1)
	{
		write(STDERR_FILENO, "Error: Can't close fd FD_VALUE\n", 31);
		exit(100);
	}

	return (0);
}
