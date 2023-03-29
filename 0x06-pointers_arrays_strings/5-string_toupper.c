#include "main.h"
/**
*string_toupper - converst lowercase charactre to upper
*
*@str: string input
*
*
*Return: upper case char
*
**/
char *string_toupper(char *str)
{
	char *ptr = str;

	while (*ptr != '\0')
	{
		if (*ptr >= 'a' && *ptr <= 'z')
		{
			*ptr = *ptr - 32;
		}
		*ptr++;
	}
	return (str);
}
