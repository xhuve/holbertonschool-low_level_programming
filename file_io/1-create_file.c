#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>

/**
* create_file - check code
*
* @filename: file name
* @text_content: text
*
* Return: int
*/
int create_file(const char *filename, char *text_content)
{
	int openfd, size = 0;

	if (filename == NULL)
		return (-1);

	while (text_content[size++] != '\0')

	openfd = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
	if (openfd == -1)
		return (-1);

	close(openfd);

	return (1);
}
