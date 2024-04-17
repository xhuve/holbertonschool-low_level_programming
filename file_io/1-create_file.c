#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include <stdio.h>

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
	int openfd, writefd, size = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[size] != '\0')
		{
			size++;
		}
	}

	openfd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (openfd == -1)
		return (-1);

	writefd = write(openfd, text_content, size);
	if (writefd == -1)
		return (-1);


	close(openfd);

	return (1);
}
