#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/stat.h>

#define BUFFER_SIZE 1024

/**
 * exit_with_error - Exits the program with an error message.
 *
 * @message: The error message to display.
 * @exit_code: The exit code to use.
 */
void exit_with_error(const char *message, int exit_code)
{
	dprintf(2, "%s\n", message);
	exit(exit_code);
}

/**
 * main - Copies the content of one file to another.
 *
 * @argc: The argument count.
 * @argv: The argument vector.
 * Return: 0 on success, or the appropriate exit code on failure.
 */
int main(int argc, char *argv[])
{
int file_from, file_to;
ssize_t bytes_read, bytes_written;
char buffer[BUFFER_SIZE];

if (argc != 3)
{
exit_with_error("Usage: cp file_from file_to", 97);
}

file_from = open(argv[1], O_RDONLY);
if (file_from == -1)
{
exit_with_error("Error: Can't read from file", 98);
}

file_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
if (file_to == -1)
{
close(file_from); /* Close the source file */
exit_with_error("Error: Can't write to file", 99);
}

while ((bytes_read = read(file_from, buffer, BUFFER_SIZE)) > 0)
{
bytes_written = write(file_to, buffer, bytes_read);
if (bytes_written == -1)
{
close(file_from);
close(file_to);
exit_with_error("Error: Can't write to file", 99);
}
}

if (bytes_read == -1)
{
close(file_from);
close(file_to);
exit_with_error("Error: Can't read from file", 98);
}

if (close(file_from) == -1 || close(file_to) == -1)
{
exit_with_error("Error: Can't close file descriptor", 100);
}

return (0);
}

