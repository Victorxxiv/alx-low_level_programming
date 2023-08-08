#include "main.h"

/**
 * is_palindrome - Check if a string is a palindrome
 * @s: The string to check
 *
 * Return: 1 if the string is a palindrome, 0 otherwise
 */
int is_palindrome(char *s)
{
	int len = 0;
	
	if (*s == '\0')
		return (1);

	while (s[len])
		len++;

	return (check_palindrome(s, len));
}

/**
 * check_palindrome - Recursive function to check if a string is a palindrome
 * @s: The string to check
 * @len: The length of the string
 * @start: The starting index
 *
 * Return: 1 if the string is a palindrome, 0 otherwise
 */
int check_palindrome(char *s, int len, int start)
{
	if (len <= 1)
		return (1);

	if (s[start] != s[start + len - 1])
		return (0);

	return (check_palindrome(s + 1, len - 2, start + 1));
}

/**
 * is_palindrome - Check if a string is a palindrome
 * @s: The string to check
 *
 * Return: 1 if the string is a palindrome, 0 otherwise
 */
int is_palindrome(char *s)
{
	int len = 0;

	if (*s == '\0')
		return (1);

	while (s[len])
		len++;

	return (check_palindrome(s, len, 0));
}

