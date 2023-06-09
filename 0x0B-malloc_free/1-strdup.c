#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - returns pointer to a newly allocated
 * @str: pointer to input string
 * Return: pointer to copy of the string null other wise.
 */
char *_strdup(char *str)
{
	char *str_cpy;
	int len = 0;
	int i;

	if (str == NULL)
	{
		return (NULL);
	}

	while (str[len] != '\0')
	{
		len++;
	}
	str_cpy = (char *) malloc(len + 1);
	if (str_cpy == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < len; i++)
	{
		str_cpy[i] = str[i];
	}
	str_cpy[i] = '\0';
	return (str_cpy);
}
