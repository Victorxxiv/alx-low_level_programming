#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point of the program
 * @argc: The number of command-line arguments
 * @argv: An array of strings containing the arguments
 *
 * Return: 0 on success, 1 on error
 */
int main(int argc, char *argv[])
{
	int num1, num2, result;

	 /* Check if the number of arguments is not 3 */
	if (argc != 3)
	{
		/* Print an error message */
		printf("Error\n");
		/* Return 1 to indicate an error */
		return (1);
	}

	/* Convert the second and third arguments to integers */
	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);

	/* Multiply the two numbers */
	result = num1 * num2;

	/* Print the result of multiplication */
	printf("%d\n", result);

	/* Indicate successful execution */
	return (0);
}

