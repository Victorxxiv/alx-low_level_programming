#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point of the program.
 * @argc: Number of command-line arguments
 * @argv: Array of command-line argument strings
 *
 * Return: 0 (Success), 1 (Incorrect arguments), 2 (Negative byte count)
 */
int main(int argc, char *argv[])
{
	int i, byte_count;

	/* Check if the correct number of arguments is provided */
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	/* Convert the byte count argument to an integer */
	byte_count + atoi(argv[1]);

	/* Check if the byte count is negative */
	if (byte_count < 0)
	{
		printf("Error\n");
		return (2);
	}

	/* Print the opcodes of the main function */
	for (i = 0; i < byte_count; i++)
	{
		printf("%02hhX", *((char *)main + i));
		if (i != byte_count - 1)
			printf(" ");
	}

	printf("\n");

	return (0);
}

