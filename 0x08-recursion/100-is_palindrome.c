#include "main.h"

/**
 * _strlen - Returns the length of a string.
 * @s: The string to measure.
 *
 * Return: The length of the string.
 */
int _strlen(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen(s + 1));
}

/**
 * is_palindrome_recursive - Checks if a string is a palindrome recursively.
 * @s: The string to check.
 * @start: The starting index of the current comparison.
 * @end: The ending index of the current comparison.
 *
 * Return: 1 if the string is a palindrome, 0 otherwise.
 */
int is_palindrome_recursive(char *s, int start, int end)
{
	/* Base case: if the indexes cross, the string is a palindrome */
	if (start >= end)
		return (1);

	/* If characters at the current indexes don't match, it's not a palindrome */
	if (s[start] != s[end])
		return (0);

	 /* Continue recursion with updated indexes */
	return (is_palindrome_recursive(s, start + 1, end - 1));
}

/**
 * is_palindrome - Wrapper function to check if a string is a palindrome.
 * @s: The string to check.
 *
 * Return: 1 if the string is a palindrome, 0 otherwise.
 */
int is_palindrome(char *s)
{
	int lenght = _strlen(s);

	 /* Empty string is a palindrome */
	if (length == 0)
		return (1);

	 /* Start recursion with the string and its boundaries */
	return (is_palindrome_recursive(s, 0, lenght - 1));
}

