#include <stdio.h>
#include <stdlib.h>

/* Function to print the opcodes of a given memory location */
void print_opcodes(char *main_ptr, int num_bytes);

int main(int argc, char *argv[])
{
	/* Check if the correct number of arguments is provided */
	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	/* Convert the argument to an integer */
	int num_bytes = atoi(argv[1]);

	/* Check for negative number of bytes */
	if (num_bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	/* Get a pointer to the main function */
	char *main_ptr = (char *)main;

	/* Print the opcodes of the main function */
	print_opcodes(main_ptr, num_bytes);

	return (0);
}

void print_opcodes(char *main_ptr, int num_bytes)
{
	int i;
	for (i = 0; i < num_bytes; i++)
	{
		/* Print opcode in hexadecimal format with leading zeros */
		printf("%02hhx", main_ptr[i]);
        
		/* Print space between opcodes (except for the last one) */
		if (i != num_bytes - 1)
			printf(" ");
	}
	printf("\n");
}

