#include "main.h"
/**
*leet - encodes some characters
*
*@str: string input
*
*
*Return: encoded char
*
**/
char *leet(char *str)
{
	char *ptr = str;
	char char_encoder[26] = {'4', 'b', 'c', 'd', '3', 'f', '6', 'h', 'i'
		, 'j', 'k', '1', 'm', 'n', '0', 'p', 'q'
			, 'r', 's', '7', 'u', 'v', 'w', 'x', 'y', 'z'};

	while (*ptr != '\0')
	{
		if (*ptr >= 'a' && *ptr <= 'z')
		{
			*ptr = char_encoder[*ptr - 'a'];
		}
		else if (*ptr >= 'A' && *ptr <= 'Z')
		{
			*ptr = char_encoder[*ptr - 'A'];
		}
	ptr++;
	}
	return (str);
}
