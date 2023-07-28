#include "main.h"

/**
 * leet - Encodes a string into 1337
 * @str: The input string to be encoded
 *
 * Return: A pointer to the encoded string
 */
char *leet(char *str)
{
	char leetMap[] = "aAeEoOtTlL";
	char leetNum[] = "4433007711";
	int i, j;

	/* First loop to iterate through the input string */
	for (i = 0; str[i] != '\0'; i++)
	{
		/* Second loop to check if the current character should be replaced */
		for (j = 0; leetMap[j] != '\0'; j++)
		{
			if (str[i] == leetMap[j])
			{
				/* Replace the character with the corresponding leetNum character */
				str[i] = leetNum[j];
				break;
			}
		}
	}

	return (str);
}

