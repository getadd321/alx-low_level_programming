#include "main.h"
/**
 * _memcpy - copies n bytes from memory area src to memory area dest
 * @src: source
 * @dest: destination
 * @n : number of bytes
 * Return: dest
 **/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i = 0;

	while (n--)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
