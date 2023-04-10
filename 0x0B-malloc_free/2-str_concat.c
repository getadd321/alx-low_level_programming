#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * str_concat - concatenates two strings
 * @s1: pointer to input string1
 * @s2: pointer to input string2
 * Return: pointer to concatinated string NULL other wise.
 */
char *str_concat(char *s1, char *s2)
{
	char *str_con;
	int len1 = 0, len2 = 0;
	int i = 0, j = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[len1] != '\0')
		len1++;
	while (s2[len2] != '\0')
		len2++;
	str_con = (char *) malloc(sizeof(char) * (len1 + len2 + 1));
	if (str_con == NULL)
		return (NULL);
	while (s1[i] != '\0')
	{
		str_con[i] = s1[i];
		i++;
	}
	while (s2[j] != '\0')
	{
		str_con[i] = s2[j];
		i++;
		j++;
	}
	str_con[i] = '\0';
	return (str_con);
}
