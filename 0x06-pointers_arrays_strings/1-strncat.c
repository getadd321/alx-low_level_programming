#include "main.h"
/**
*_strncat - concatinates two string
*
*@dest: input one
*
*@src: input two
*
*@n: integer input
*Return: string
**/
char *_strncat(char *dest, char *src, int n)
{
	char *dest_ptr = dest;
	int i;

	while (*dest != '\0')
	{
		dest++;
	}
	for (i = 0; i < n && src[i] != '0'; i++)
	{
		*dest = src[i];
		dest++;
	}
	dest = '\0';
	return (dest_ptr);
}
