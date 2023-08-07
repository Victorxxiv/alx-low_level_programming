#include "main.h"
#include <unistd.h> /* Include this header for the write function */

/**
 * _putchar - Writes a character to the standard output
 * @c: The character to be written
 * Return: On success, the character written. On error, -1.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

