#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include "main.h"

/**
* create_file - Creates a file with specified permissions and writes text to it
* @filename: Name of the file to create
* @text_content: NULL-terminated string to write to the file
*
* Return: 1 on success, -1 on failure
*/
int create_file(const char *filename, char *text_content)
{
	int fd, len, write_result;

	/* Check if filename is NULL */
	if (filename == NULL)
		return (-1);

	/* Create or open the file with read-write permissions */
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	/* If text_content is not NULL, write its content to the file */
	if (text_content != NULL)
	{
		len = 0;
		while (text_content[len])
			len++;

		/* Write the text_content to the file */
		write_result = write(fd, text_content, len);
		if (write_result == -1)
		{
			close(fd);
			return (-1);
		}
	}

	/* Close the file descriptor and return success */
	close(fd);
	return (1);
}

