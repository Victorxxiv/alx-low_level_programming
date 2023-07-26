#include "main.h"

/**
 * _strncat - Concatenates two strings, using at most n bytes from src.
 * @dest: Pointer to the destination string.
 * @src: Pointer to the source string.
 * @n: Maximum number of bytes from src to be concatenated.
 *
 * Return: Pointer to the resulting string dest.
 */
char *_strncat(char *dest, char *src, int n)
{
	char *ptr = dest;

	/* Find the end of the destination string */
	while (*dest != '\0')
		dest++;

	/* Append at most n bytes from the source string to the destination string */
	while (*src != '\0' && n > 0)
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}

	/* Null-terminate the concatenated string */
	*dest = '\0';

	return (ptr);
}

