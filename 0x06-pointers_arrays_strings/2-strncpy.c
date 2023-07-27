#include "main.h"

/**
 * _strncpy - Copies a string
 * @dest: The destination buffer
 * @src: The source string
 * @n: The maximum number of characters to copy
 *
 * Return: A pointer to the destination string
 */
char *_strncpy(char *dest, char *src, int n)
{
	/* Declare a variable 'i' to use as a loop counter */
	int i;

	/* Loop to copy 'n' characters from source to destination */
	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		/* Copy each character from source to destination */
		dest[i] = src[i];
	}

	/* Fill remaining spaces in destination with null characters */
	for (; i < n; i++)
	{
		/* Null character represents the end of a string in C */
		dest[i] = '\0';
	}

	/* Return the destination string */
	return (dest);
}

