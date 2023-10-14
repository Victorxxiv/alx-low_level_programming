#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include "main.h"

/**
* create_file - Create a file with specific permissions and write text content
* @filename: The name of the file to create
* @text_content: The text content to write to the file
* Return: 1 on success, -1 on failure
*/
int create_file(const char *filename, char *text_content)
{
	int fd = 0; /* Initialize fd to zero to avoid potential issues */

	if (filename == NULL)
		return (-1); /* Return -1 if filename is NULL */

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (fd == -1)
	return (-1); /* Return -1 if the file cannot be created or opened */

	if (text_content)
	{
		ssize_t bytes_written = write(fd, text_content, strlen(text_content));

		if (bytes_written == -1 || (size_t)bytes_written != strlen(text_content))
		{
			close(fd);
			return (-1); /* Return -1 if writing content fails */
		}
	}

	close(fd);
	return (1); /* Return 1 on success */
}

