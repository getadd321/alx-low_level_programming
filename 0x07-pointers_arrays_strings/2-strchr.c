#include "main.h"
/**
 * _strchr - locates a character in a string
 * @s: string input
 * @c: charcter match
 * Return: pointer to the char c
 **/
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		return (s);
		s++;
	}
	return (NULL);
}
