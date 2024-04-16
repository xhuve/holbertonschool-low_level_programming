#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>

/**
* append_text_to_file - check code
*
* @filename: file name
* @text_content: text
*
* Return: int
*/
int append_text_to_file(const char *filename, char *text_content)
{
	int openfd, writefd, size = 0;

	if (filename == NULL)
		return (-1);

	while (text_content[size++] != '\0')

	openfd = open(filename, O_RDWR | O_APPEND, 0600);
	if (openfd == -1)
		return (-1);

	if (text_content == NULL)
		return (1);

	writefd = write(openfd, text_content, size);
	if (writefd == -1)
		return (-1);

	close(openfd);

	return (1);
}
