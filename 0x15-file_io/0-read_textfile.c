#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include "main.h"

/**
* read_textfile - Read and print a text file
* @filename: The name of the file to read
* @letters: The number of letters to read and print
* Return: The actual number of letters read and printed
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd; /* File descriptor */
	ssize_t bytes_read, bytes_written;
	char *buffer; /* Buffer to hold the file content */

	if (filename == NULL)
		return (0); /* Return 0 if filename is NULL */

	fd = open(filename, O_RDONLY); /* Open the file for reading */
	if (fd == -1)
		return (0); /* Return 0 if the file cannot be opened */

	buffer = malloc(sizeof(char) * letters); /* Allocate memory buffer */
	if (buffer == NULL)
	{
		close(fd);
		return (0); /* Return 0 if memory allocation fails */
	}

	bytes_read = read(fd, buffer, letters); /* Read from file to buffer */
	if (bytes_read == -1)
	{
		free(buffer);
		close(fd);
		return (0); /* Return 0 if reading from the file fails */
	}

	bytes_written = write(STDOUT_FILENO, buffer, bytes_read);
	if (bytes_written == -1 || bytes_written != bytes_read)
	{
		free(buffer);
		close(fd);
		return (0); /* Return 0 if writing to standard output fails */
	}

	free(buffer); /* Free the allocated buffer */
	close(fd);    /* Close the file */

	return (bytes_written);
}

