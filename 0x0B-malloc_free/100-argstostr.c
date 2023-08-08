#include "main.h"
#include <stdlib.h>

/**
 * argstostr - Concatenates all the arguments of the program.
 * @ac: The number of arguments.
 * @av: An array of argument strings.
 *
 * Return: A pointer to the concatenated string, or NULL on failure.
 */
char *argstostr(int ac, char **av)
{
	char *concatenated;
	int total_length = 0;
	int i, j, k = 0;

	/* Check for invalid ac or av */
	if (ac <= 0 || av == NULL)
		return (NULL);

	/* Calculate the total length of the concatenated string */
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			total_length++;
		total_length++; /* for newline character */
	}

	/* Allocate memory for the concatenated string */
	concatenated = (char *)malloc((total_length + 1) * sizeof(char));
	if (concatenated == NULL)
		return (NULL);

	/* Copy each argument and add newline */
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			concatenated[k] = av[i][j];
			k++;
		}
		concatenated[k] = '\n';
		k++;
	}

	concatenated[k] = '\0'; /* Add null-terminator */

	return (concatenated);
}

