#include "main.h"
/**
*cap_string - capitalizes all words of a string.
*
*@str: input string
*
*
*Return: string
*
**/
char *cap_string(char *str)
{
	char *ptr = str;
	int is_new_word = 1;

	while (*ptr != '\0')
	{
		if (is_new_word && (*ptr >= 'a' && *ptr <= 'z'))
		{
			*ptr = *ptr - 'a' + 'A';
		}
		is_new_word = (*ptr == ' ' || *ptr == '\t' || *ptr == '\n' || *ptr == ',' ||
				*ptr == ';' || *ptr == '.' || *ptr == '!' || *ptr == '?' ||
				*ptr == '"' || *ptr == '(' || *ptr == ')' || *ptr == '{' || *ptr == '}');
		if (*ptr == '\t')
		{
			*ptr = ' ';
		}
		ptr++;
	}
	return (str);
}
