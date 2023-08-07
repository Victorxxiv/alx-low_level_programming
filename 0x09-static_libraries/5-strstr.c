#include "main.h"
#include <stddef.h> /* Include this header for NULL */

/**
 * _strstr - Locates a substring within a string
 * @haystack: The string to search in
 * @needle: The substring to search for
 * Return: Pointer to the beginning of the located substring,
 * or NULL if not found
 */
char *_strstr(char *haystack, char *needle)
{
	while (*haystack)
	{
		char *h = haystack;
		char *n = needle;

		while (*n && *h == *n)
		{
			h++;
			n++;
		}

		if (*n == '\0')
		{
			return (haystack);
		}

		haystack++;
	}

	return (NULL);
}

