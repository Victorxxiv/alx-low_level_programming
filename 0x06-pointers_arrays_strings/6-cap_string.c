#include "main.h"

/**
 * cap_string - Capitalizes all words of a string
 * @str: The input string to be capitalized
 *
 * Return: A pointer to the capitalized string
 */
char *cap_string(char *str)
{
	int i;
	char separators[] = " \t\n,;.!?\"(){}";

	/* Check if the first character is a letter and capitalize it if necessary */
	if (str[0] >= 'a' && str[0] <= 'z')
		str[0] -= 32;

	/* Iterate through each character in the string */
	for (i = 1; str[i] != '\0'; i++)
	{
		int j;
		/* Check if the current character is a separator */
		for (j = 0; separators[j] != '\0'; j++)
		{
			/* If the current character is a separator, check the next character */
			if (str[i] == separators[j])
			{
				/* If the next character is a letter, capitalize it */
				if (str[i + 1] >= 'a' && str[i + 1] <= 'z')
					str[i + 1] -= 32;
				break;
			}
		}
	}

	return (str);
}

