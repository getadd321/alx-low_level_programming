#include "main.h"
/**
 * _strspn - gets the length of a prefix substring
 * @s: pointer to string input
 * @accept: pointer to valid charcter
 * Return: unsihned int length
 **/
unsigned int _strspn(char *s, char *accept)
{
	unsigned int len = 0;
	char *p;

	while (*s != '\0')
	{
		p = accept;
		while (*p != '\0' && *p != *s)
		{
			p++;
		}
		if (*p == '\0')
		{
			return (len);
		}
		s++;
		len++;
	}
	return (len);
}
