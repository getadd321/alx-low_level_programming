#include "main.h"
/**
 * _strpbrk - locates the matching chars of string inputs s and accept
 * @s: pointer to string input s
 * @accept: pointer to input string accept
 * Return: maching char
 **/
char *_strpbrk(char *s, char *accept)
{
	char *ptr_s = s;
	char *ptr_accept;

	while (*ptr_s != '\0')
	{
		ptr_accept = accept;
		while (*ptr_accept != '\0')
		{
			if (*ptr_s == *ptr_accespt)
			{
				return (ptr_s);
			}
			ptr_accept++;
		}
		ptr_s++;
	}
	return (NULL);
}
