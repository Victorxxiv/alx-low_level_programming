#include "main.h"

/**
 * _strcpy - Copies the string pointed to by src, including the null byte,
 *           to the buffer pointed to by dest
 * @dest: The destination buffer
 * @src: The source string
 * Return: Pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	char *dest_ptr = dest;

	while (*src)
	{
		*dest_ptr = *src;
		dest_ptr++;
		src++;
	}

	*dest_ptr = '\0';

	return (dest);
}

