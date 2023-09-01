#include "main.h"

/**
 * binary_to_uint - Convert a binary string to an unsigned int
 * @b: Pointer to a binary string
 *
 * Return: The converted number, or 0 if there's an invalid character or
 * NULL input
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;
	int i;

	/* Check if the input string is NULL */
	if (b == NULL)
		return (0);

	/* Iterate through the characters of the binary string */
	for (i = 0; b[i] != '\0'; i++)
	{
		/* Check if the current character is not '0' and not '1' */
		if (b[i] != '0' && b[i] != '1')
			return (0);

		/* Shift the result left by 1 to make room for the next bit */
		result = result << 1;

		/* If the current character is '1', set the least significant bit to 1 */
		if (b[i] == '1')
			result = result | 1;
	}

	/* Return the converted unsigned int */
	return (result);
}



