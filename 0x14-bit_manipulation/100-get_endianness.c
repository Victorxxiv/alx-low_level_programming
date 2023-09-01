#include "main.h"

/**
* get_endianness - Check the endianness of the system
*
* Return: 0 if big-endian, 1 if little-endian
*/
int get_endianness(void)
{
	unsigned int x = 1;
	char *c = (char *)&x;

	/* If the least significant byte is stored in the lowest, little-endian */
	if (*c)
		return (1); /* Little-endian */
	else
	return (0); /* Big-endian */
}

