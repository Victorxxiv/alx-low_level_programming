#include "main.h"

/**
 * cap_string - Capitalizes all words of a string.
 * @str: The input string.
 *
 * Return: A pointer to the modified string.
 */
char *cap_string(char *str)
{
	int i = 0;

	while (str[i])
	{
		/* Capitalize the first character if it's a letter */
		if (i == 0 && str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;

		/* Capitalize the character after a separator */
		if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' ||
			str[i] == ',' || str[i] == ';' || str[i] == ',' ||
			str[i] == '!' || str[i] == '?' || str[i] == '"' ||
			str[i] == '(' || str[i] == ')' || '{' || str[i] == '}')
		{
			if (str[i + 1] >= 'a' && str[i + 1] <= 'z')
				str[i + 1] -= 32;
		}

		i++;
	}

	return (str);
}

