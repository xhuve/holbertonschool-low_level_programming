#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>

/**
* read_textfile - check code
*
* @filename: file name
* @letters: text
*
* Return: int
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	int openfd, readfd, writefd;
	char *buff;

	if (filename == NULL)
		return (0);

	openfd = open(filename, O_RDONLY);
	if (openfd == -1)
		return (0);

	buff = malloc(sizeof(char) * letters);
	if (buff == NULL)
		return (0);

	readfd = read(openfd, buff, letters);
	if (readfd == -1)
		return (0);

	writefd = write(STDOUT_FILENO, buff, readfd);
	if (writefd == -1)
		return (0);

	free(buff);

	close(openfd);

	return (readfd);
}
