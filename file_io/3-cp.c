#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include <stdio.h>

/**
* _strlen - check code
*
* @str: string
*
* Return: int
*/
int _strlen(char *str)
{
	int length = 0;

	while (str[length++] != '\0')
	;

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
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}

	file_to = open(av[2], O_RDWR | O_CREAT | O_EXCL, 0664);
	if (file_to == -1)
	{
		dprintf(STDOUT_FILENO, "Error: Can't write to %s\n", av[2]);
		exit(99);
	}

	readfd = read(file_from, buffer, 1024);
	if (readfd == -1)
		return (-1);
	while (readfd > 0)
	{
		writefd = write(file_to, buffer, readfd);
		if (writefd == -1)
			return (-1);
		readfd = read(file_from, buffer, 1024);
	}

	closefd = close(file_from);
	if (closefd == -1)
	{
		dprintf(STDOUT_FILENO, "Error: Can't close fd %d\n", file_from);
		exit(100);
	}

	closefd = close(file_to);
	if (closefd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_to);
		exit(100);
	}

	return (0);
}
