#include "main.h"

/**
 * rot13 - Encodes a string using ROT13 cipher
 * @str: The input string to be encoded
 *
 * Return: A pointer to the encoded string
 */
char *rot13(char *str)
{
	char *s = str;
	int i;

	/* Loop through the input string */
	for (i = 0; str[i] != '\0'; i++)
	{
		/* Check if the character is a letter */
		if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
		{
			/* Add 13 to the character value to perform ROT13 encoding */
			if ((str[i] >= 'a' && str[i] <= 'm') || (str[i] >= 'A' && str[i] <= 'M'))
			{
				s[i] = str[i] + 13;
			}
			else
			{
				s[i] = str[i] - 13;
			}
		}
	}

	return (s);
}

