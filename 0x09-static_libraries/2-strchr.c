#include "main.h"
#include <stddef.h> /* Include this header for NULL */

/**
 * _strchr - Locates a character in a string
 * @s: The string to search
 * @c: The character to locate
 * Return: Pointer to the first occurrence of c in s, or NULL if not found
 */
char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}

	if (*s == c)
	{
		return (s);
	}

	/* No need to check *s == c, as we've already checked it in the loop */
	return (NULL); /* Use NULL from <stddef.h> */
}

