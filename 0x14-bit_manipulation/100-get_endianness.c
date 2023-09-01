#include "main.h"

/**
* get_endianness - Checks the endianness of the system.
*
* Return: 0 if big endian, 1 if little endian
*/
int get_endianness(void)
{
	unsigned int num = 1;
	char *endianCheck = (char *)&num;

	/* If the least significant byte is stored first (little endian) */
	if (*endianCheck == 1)
		return (1); /* Little Endian */

	/* If not little endian, assume big endian */
	return (0); /* Big Endian */
}

