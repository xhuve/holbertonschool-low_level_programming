#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include <stdio.h>

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
		write(STDERR_FILENO, "Error: Can't read from file NAME_OF_THE_FILE\n", 45);
		exit(98);
	}

	readfd = read(file_from, buffer, 1024);

	file_to = open(av[2], O_RDWR | O_CREAT, 0664);
	if (file_to == -1)
	{
		write(STDERR_FILENO, "Error: Can't write to \n", 39);
		exit(99);
	}

	writefd = write(file_to, buffer, readfd);
	if (writefd == -1)
		return (-1);

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
