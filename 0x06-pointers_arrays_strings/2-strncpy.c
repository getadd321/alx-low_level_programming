#include "main.h"
/**
*_strncpy - concatinates two string
*
*@dest: input one
*
*@src: input two
*
*@n: num of char to copy
*Return: string
**/
char *_strncpy(char *dest, char *src, int n)
{
	char *dest_ptr = dest;

	while (*src && n > 0)
	{
		*dest++ = *src++;
		n--;
	}
	while (n > 0)
	{
		*dest++ = '\0';
		n--;
	}
	return (dest_ptr);
}
