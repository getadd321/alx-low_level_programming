#include "main.h"
#include <stdio.h>
/**
 *_strcpy - prints array elements
 *
 *@dest: destination
 *@src: source
 *
 * Return: dest
 */
char *_strcpy(char *dest, char *src);
{
	int i;
	int l = 0;

	while (*(src + l) != '\0')
	{
		l++;
	}

	for (i = 0; i < l; i++)
	{
		dest[i] = src[i];
	}
	dest[l] = '\0';
	return (dest);
}
