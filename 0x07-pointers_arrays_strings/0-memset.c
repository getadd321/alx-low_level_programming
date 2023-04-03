#include "main.h"
/**
 * _memset - fills the first n bytes of the memory
 * @s: ponter that points to the memory
 * @b: input charcter
 * @n: size of the memory
 * Return: chr.
 **/
char *_memset(char *s, char b, unsigned int n)
{
	char *p = s;

	while (n--)
	{
		++p = b;
	}
	return (s);
}
