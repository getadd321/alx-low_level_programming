#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * argstostr - concatinates the arguments to the program
 * @ac: number of arguments passed to the program
 * @av: array of string containing the arguments
 * Return: pointer to new string concatinted with \n at each arg
 */
char *argstostr(int ac, char **av)
{
	int i, j, k = 0, len = 0;
	char *str;

	if (ac == 0 || av == 0)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			len++;
	}
	len += ac;
	str = malloc(sizeof(char) * len + 1);
	if (str == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			str[k] = av[i][j];
			k++;
		}
		if (str[k] == '\0')
			str[k++] = '\n';
	}
	return (str);
}
