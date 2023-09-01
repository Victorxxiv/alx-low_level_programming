#include <unistd.h>

/**
 * _putchar - Write a character to stdout
 * @c: The character to write
 *
 * Return: On success, return the number of characters written.
 * On error, return -1 and set errno.
 */

int _putchar(char c)
{
	return write(1, &c, 1);
}
