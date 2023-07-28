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
			/* Rotate lowercase letters */
			if (str[i] >= 'a' && str[i] <= 'z')
			{
				if (str[i] + 13 > 'z')
					s[i] = 'a' + (str[i] + 13 - 'z' - 1);
				else
					s[i] = str[i] + 13;
			}
			/* Rotate uppercase letters */
			else
			{
				if (str[i] + 13 > 'Z')
					s[i] = 'A' + (str[i] + 13 - 'Z' - 1);
				else
					s[i] = str[i] + 13;
			}
		}
	}

	return (s);
}

