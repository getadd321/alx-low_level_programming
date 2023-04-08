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
	int i = 0;

	while (n--)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
