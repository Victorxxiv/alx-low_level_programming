#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include "main.h"

/**
* append_text_to_file - Appends text to the end of a file
* @filename: Name of the file to append to
* @text_content: NULL-terminated string to append to the file
*
* Return: 1 on success, -1 on failure
*/
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, len, write_result;

	/* Check if filename is NULL */
	if (filename == NULL)
		return (-1);

	/* Open the file in append mode */
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		len = 0;
		while (text_content[len])
			len++;

		/* Write the text_content to the end of the file */
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

