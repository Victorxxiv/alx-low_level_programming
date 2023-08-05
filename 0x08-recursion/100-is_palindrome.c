#include "main.h"

/* Function prototype for check_palindrome */
int check_palindrome(char *s, int start, int end);

/**
 * is_palindrome - Checks if a string is a palindrome.
 * @s: The input string to be checked.
 *
 * Return: 1 if palindrome, 0 otherwise.
 */
int is_palindrome(char *s)
{
	/* Initialize a variable to store the length of the string */	
	int len = 0;

	/* Calculate the length of the string */
	while (s[len] != '\0')
		len++;

	/* Call the helper function to check for palindrome */
	return (check_palindrome(s, 0, len - 1));
}

/**
 * check_palindrome - Recursive helper function to check palindrome.
 * @s: The input string.
 * @start: Starting index.
 * @end: Ending index.
 *
 * Return: 1 if palindrome, 0 otherwise.
 */
int check_palindrome(char *s, int start, int end)
{
	/* Base case: If start index is greater than or equal to end index */
	if (start >= end)
		return (1);

	/* Compare characters at start and end indices */
	if (s[start] != s[end])
		return (0);

	/* Recursively check the next characters */
	return (check_palindrome(s, start + 1, end - 1));
}

