#include "main.h"
/**
 * _strchr - locates a character in a string
 * @s: string input
 * @c: charcter match
 * Return: pointer to the char c
 **/
char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			return (&s[i]);
		}
		i++;
	}
	return (0);
}
