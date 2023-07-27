#include "main.h"

/**
 * _strcmp - Compare two strings.
 * @s1: The first string.
 * @s2: The second string.
 *
 * Return: An integer less than, equal to, or greater than zero
 * if s1 is found, respectively, to be less than, to match,
 * or be greater than s2.
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	/* Iterate through the strings until a mismatch is found or the end. */
	while (s1[i] && s2[i] && s1[i] == s2[i])
		i++;

	/* Return the difference between the ASCII values of the characters. */
	return (s1[i] - s2[i]);
}

