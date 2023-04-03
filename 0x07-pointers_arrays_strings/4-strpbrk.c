#include "main.h"
/**
 * _strpbrk - locates the matching chars of string inputs s and accept
 * @s: pointer to string input s
 * @accept: pointer to input string accept
 * Return: maching char
 **/
char *_strpbrk(char *s, char *accept)
{
	int j = 0;

	while (*s != '\0')
	{
		while (accept[j] != '\0')
		{
			if (*s == accespt[j])
			{
				return (s);
			}
			j++;
		}
		s++;
	}
	return ('\0');
}
