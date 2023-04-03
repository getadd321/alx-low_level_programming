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
	char *p = s;

	while (p != '\0')
	{
		if (s[i] == c)
		return (&s[i]);
		i++;
		p++;
	}
	return (0);
}
