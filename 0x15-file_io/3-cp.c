#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/stat.h>

#define BUFFER_SIZE 1024

/**
 * main - Copies the content of one file to another.
 * @ac: Argument count.
 * @av: Argument vector.
 * Return: 0 on success, or the appropriate exit code on failure.
 */
int main(int ac, char *av[])
{
int file_from, file_to;
ssize_t bytes_read, bytes_written;
char buffer[BUFFER_SIZE];

if (ac != 3)
{
dprintf(2, "Usage: %s file_from file_to\n", av[0]);
exit(97);
}

file_from = open(av[1], O_RDONLY);
if (file_from == -1)
{
dprintf(2, "Error: Can't read from file %s\n", av[1]);
exit(98);
}

file_to = open(av[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
if (file_to == -1)
{
dprintf(2, "Error: Can't write to %s\n", av[2]);
close(file_from);
exit(99);
}

while ((bytes_read = read(file_from, buffer, BUFFER_SIZE)) > 0)
{
bytes_written = write(file_to, buffer, bytes_read);
if (bytes_written == -1)
{
dprintf(2, "Error: Can't write to %s\n", av[2]);
close(file_from);
close(file_to);
exit(99);
}
}

if (bytes_read == -1)
{
dprintf(2, "Error: Can't read from file %s\n", av[1]);
close(file_from);
close(file_to);
exit(98);
}

if (close(file_from) == -1)
{
dprintf(2, "Error: Can't close fd %d\n", file_from);
exit(100);
}
if (close(file_to) == -1)
{
dprintf(2, "Error: Can't close fd %d\n", file_to);
exit(100);
}

return (0);
}

