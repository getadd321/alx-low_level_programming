#include "main.h"
/**
 * _strpbrk - locates the matching chars of string inputs s and accept
 * @s: pointer to string input s
 * @accept: pointer to input string accept
 * Return: maching char
 **/
char *_strpbrk(char *s, char *accept)
{
	while (*s != '\0')
	{
		while (*accept != '\0')
		{
			if (*s == *accespt)
			{
				return (s);
			}
			accept++;
		}
		s++;
	}
	return ('\0');
}
