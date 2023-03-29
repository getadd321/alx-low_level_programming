#include "main.h"
/**
*rot13 - encodes some characters
*
*@str: string input
*
*
*Return: encoded char
*
**/
char *rot13(char *str)
{
	char *ptr = str;
	char cipher_encoder[26] = {'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v'
		, 'w', 'x', 'y', 'z', 'a', 'b', 'c', 'd'
			, 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm'};

	while (*ptr != '\0')
	{
		if (*ptr >= 'a' && *ptr <= 'z')
		{
			*ptr = cipher_encoder[*ptr - 'a'];
		}
		else if (*ptr >= 'A' && *ptr <= 'Z')
		{
			*ptr = cipher_encoder[*ptr - 'A'];
		}
		*ptr++;
	}
	return (str);
}
