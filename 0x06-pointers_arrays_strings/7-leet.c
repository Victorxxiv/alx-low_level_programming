#include "main.h"

/**
 * leet - Encodes a string into 1337
 * @str: The input string to be encoded
 *
 * Return: A pointer to the encoded string
 */
char *leet(char *str)
{
	/* Arrays to store characters to be replaced and their replacements */
	char leetMap[] = {'0', 'L', '\0', 'E', 'A'};
	char leetNum[] = {'0', '1', '3', '3', '4'};
	int i, j;

	 /* Outer loop to iterate through each character in the input string */
	for (i = 0; str[i] != '\0'; i++)
	{
		/* Inner loop to check if the current character needs to be replaced */
		for (j = 0; leetMap[j] != '\0'; j++)
		{
			/* Check if the current character matches any character in leetMap */
			if (str[i] == leetMap[j] || str[i] == leetMap[j] + 32)
			{
				/* Replace the character with the corresponding leetNum character */
				str[i] = leetNum[j];
				break;
			}
		}
	}

	 /* Return a pointer to the modified string */
	return (str);
}


