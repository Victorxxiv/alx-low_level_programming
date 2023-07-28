#include <unistd.h>

/**
 * _putchar - Writes a character to the standard output (stdout)
 * @c: The character to be written
 *
 * Return: On success, return the number of characters written (1).
 * On error, return -1 and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
