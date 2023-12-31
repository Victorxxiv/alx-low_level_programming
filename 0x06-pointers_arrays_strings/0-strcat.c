#include "main.h"

/**
 * _strcat - Concatenates two strings.
 * @dest: Pointer to the destination string.
 * @src: Pointer to the source string.
 *
 * Return: Pointer to the resulting string dest.
 */
char *_strcat(char *dest, char *src)
{
	char *ptr = dest;

	/* Find the end of the destination string */
	while (*dest != '\0')
		dest++;

	/* Append the source string to the destination string */
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}

	/* Null-terminate the concatenated string */
	*dest = '\0';

	return (ptr);
}

