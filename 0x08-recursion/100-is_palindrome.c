#include "main.h"

/**
 * length_recursive - Calculates the length of a string recursively.
 * @s: The input string.
 * Return: The length of the string.
 */
int length_recursive(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + length_recursive(s + 1));
}

/**
 * is_palindrome - Checks if a string is a palindrome.
 * @s: The input string to check.
 * Return: 1 if string is a palindrome, 0 otherwise.
 */
int is_palindrome(char *s)
{
	int len = length_recursive(s);

	return (check_palindrome(s, 0, len - 1));
}

/**
 * check_palindrome - Helper function to check if a string is a palindrome.
 * @s: The input string.
 * @start: The starting index.
 * @end: The ending index.
 * Return: 1 if string is a palindrome, 0 otherwise.
 */
int check_palindrome(char *s, int start, int end)
{
	if (start >= end)
		return (1); /* Base case: reached middle, string is a palindrome */

	if (s[start] != s[end])
		return (0); /* Characters at start and end don't match, not a palindrome */

	/* Recur with inner substring */
	return (check_palindrome(s, start + 1, end - 1));
}

