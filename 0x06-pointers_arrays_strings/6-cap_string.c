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

	/* Capitalize the first character if it's a letter */
	if (str[i] >= 'a' && str[i] <= 'z')
		str[i] -= 32;

	while (str[i]) != '\0')
	{
		/* Capitalize the character after a separator */
		if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' ||
			str[i] == ',' || str[i] == ';' || str[i] == ',' ||
			str[i] == '!' || str[i] == '?' || str[i] == '"' ||
			str[i] == '(' || str[i] == ')' || '{' || str[i] == '}')
		{
			i++;

			/* Capitalize the character if it's a letter */
			if (str[i + 1] >= 'a' && str[i] <= 'z')
				str[i] -= 32;
		}

		i++;

	return (str);
}

