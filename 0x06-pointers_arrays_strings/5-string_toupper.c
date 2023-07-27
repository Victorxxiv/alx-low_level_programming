#include "main.h"

/**
 * string_toupper - Convert all lowercase letters of a string to uppercase.
 * @str: The input string.
 *
 * Return: A pointer to the modified string.
 */
char *string_toupper(char *str)
{
	int i = 0;

	 /* Iterate through the string until we reach the null terminator */
	while (str[i] != '\0')
	{
		/* Check if the current character is a lowercase letter */
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			 /* Convert the lowercase letter to uppercase. */
			str[i] = str[i] - ('a' - 'A');
		}
		i++;
	}

	/* Return the modified string */
	return (str);
}

