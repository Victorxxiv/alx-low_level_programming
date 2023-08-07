#include "main.h"

/**
 * _isalpha - Checks if a character is alphabetic
 * @c: The character to be checked
 * Return: 1 if c is alphabetic, 0 otherwise
 */
int _isalpha(int c)
{
	return ((_islower(c) || _isupper(c)) ? 1 : 0);
}

