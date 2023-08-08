#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

/**
 * is_positive_number - Check if a string is a positive number
 * @str: The string to check
 *
 * Return: true if positive number, false otherwise
 */
bool is_positive_number(char *str)
{
	/* Loop through each character in the string */
	while (*str)
	{
		/* If the character is not a digit (0-9), return false */
		if (*str < '0' || *str > '9')
			return (false);
		str++;
	}
	/* All characters are digits, so return true (positive number) */
	return (true);
}

/**
 * main - Entry point of the program
 * @argc: The number of command-line arguments
 * @argv: An array of strings containing the arguments
 *
 * Return: 0 on success, 1 on error
 */
int main(int argc, char *argv[])
{
	int i, sum = 0;

	 /* If no arguments (other than program name) are provided */
	if (argc == 1)
	{
		/* Print "0" and return 0 to indicate success */
		printf("0\n");
		return (0);
	}

	/* Loop through each command-line argument starting from index 1 */
	for (i = 1; i < argc; i++)
	{
		/* Check if the current argument is not a positive number */
		if (!is_positive_number(argv[i]))
		{
			/* Print "Error" and return 1 to indicate error */
			printf("Error\n");
			return (1);
		}

		/* Convert the argument to an integer and add it to the sum */
		sum += atoi(argv[i]);
	}

	/* Print the sum of all positive numbers */
	printf("%d\n", sum);

	/* Return 0 to indicate successful execution */
	return (0);
}

