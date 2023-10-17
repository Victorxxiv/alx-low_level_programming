#include "main.h"

/**
 * append_text_to_file - Appends text to the end of a file.
 *
 * @filename: The name of the file.
 * @text_content: The text to append.
 * Return: 1 on success, -1 on failure.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, text_len, write_result;

	if (filename == NULL)
	return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd == -1)
		return (-1);

	if (text_content == NULL)
	{
		close(fd);
		return (1);
	}

	text_len = strlen(text_content);
	write_result = write(fd, text_content, text_len);

	if (write_result == -1)
	{
		close(fd);
		return (-1);
	}

	close(fd);

	return (1);
}

