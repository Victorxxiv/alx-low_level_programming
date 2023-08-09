#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

/**
 * word_count - Counts the number of words in a string.
 * @str: The input string.
 *
 * Return: The number of words in the string.
 */
int word_count(char *str)
{
	int count = 0;
	bool in_word = false;

	while (*str)
	{
		if (*str != ' ')
		{
			if (!in_word)
			{
				count++;
				in_word = true;
			}
		}
		else
		{
			in_word = false;
		}
		str++;
	}

	return (count);
}

/**
 * strtow - Splits a string into words.
 * @str: The input string.
 *
 * Return: A pointer to an array of strings (words), or NULL on failure.
 */
char **strtow(char *str)
{
	char **words;
	int num_words, word_index, word_length, i;

	/* Check for invalid str */
	if (str == NULL || *str == '\0')
		return NULL;

	/* Count the number of words */
       	num_words = word_count(str);

	/* Allocate memory for the array of words */
	words = (char **)malloc((num_words + 1) * sizeof(char *));
	if (words == NULL)
		return NULL;

	word_index = 0;
	while (*str)
	{
		/* Skip leading spaces */
		while (*str == ' ')
			str++;

		/* Calculate word length */
		word_length = 0;
		while (str[word_length] != '\0' && str[word_length] != ' ')
			word_length++;

		/* Allocate memory for the word */
		words[word_index] = (char *)malloc((word_length + 1) * sizeof(char));
		if (words[word_index] == NULL)
		{
			for (i = 0; i < word_index; i++)
				free(words[i]);
			free(words);
			return (NULL);
		}

		/* Copy the word */
		for (i = 0; i < word_length; i++)
			words[word_index][i] = str[i];
		words[word_index][i] = '\0';

		/* Move to the next word */
		str += word_length;
		word_index++;
	}

	words[num_words] = NULL; /* Mark the end of the array */

	return (words);
}

