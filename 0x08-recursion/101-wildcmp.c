#include "main.h"

/**
 * wildcmp - Compares two strings and returns 1 if they are identical
 *           considering '*' as a wildcard, otherwise returns 0.
 * @s1: The first string.
 * @s2: The second string with possible wildcards.
 * Return: 1 if strings are identical, 0 otherwise.
 */
int wildcmp(char *s1, char *s2)
{
	/* Check if current character in s2 is '*' */
	if (*s2 == '*')
	{
		if (*s1 == '\0' && *(s2 + 1) == '\0')
			return (1); /* If both strings are empty, they match */
		/* If next character in s2 is also '*', continue */
		if (*(s2 + 1) == '*')
			return (wildcmp(s1, s2 + 1));
		/* Recursively match with '*' character */
		if (wildcmp(s1, s2 + 1))
			return (1);
		return (wildcmp(s1 + 1, s2)); /* Move forward in s1 and check */
	}

	/* If characters match or s2 contains '?', continue checking */
	if (*s1 != '\0' && *s2 != '\0' && (*s1 == *s2 || *s2 == '?'))
		return (wildcmp(s1 + 1, s2 + 1)); /* Move forward in both strings */

	/* If both strings are empty, they match */
	if (*s1 == '\0' && *s2 == '\0')
		return (1);

	return (0); /* If none of the conditions above match, strings don't match */
}

