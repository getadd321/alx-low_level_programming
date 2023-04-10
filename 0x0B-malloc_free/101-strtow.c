#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * strtow - returns a pointer to an array of strings
 * @str: pointer to array of strings input
 * Return: pointer to splited strings
 */
char **strtow(char *str)
{
	int word_count = 0, len, i = 0, j = 0;
	char *ptr = str, *word;
	char **words;

	if (str == NULL || *str == '\0')
		return (NULL);
	while (*ptr != '\0')
	{
		while (*ptr == ' ')
			ptr++;
		if (*ptr != '\0')
		{
			word_count++;
			while (*ptr != ' ' && *ptr != '\0')
				ptr++;
		}
	}
	words = (char **) malloc((word_count + 1) * sizeof(char *));
	if (words == NULL)
		return (NULL);
	ptr = str;
	while (*ptr != '\0')
	{
		while (*ptr == ' ')
			++ptr;
		if (*ptr != '\0')
		{
			word = ptr;
			while (*ptr != ' ' && *ptr != '\0')
			ptr++;
			len = ptr - word;
			words[i] = (char *) malloc((len + 1) * sizeof(char));
			if (words[i] == NULL)
			{
				for (j = 0; j < i; j++)
					free(words[j]);
				free(words);
				return (NULL);
			}
			for (j = 0; j < len; j++)
				words[i][j] = word[j];
			words[i][len] = '\0';
			i++;
		}
	}
	words[word_count] = NULL;
	return (words);
}
