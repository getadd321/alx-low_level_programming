#include "main.h"
/**
*leet - encodes a string into 1337
*
*@str: string input
*
*
*Return: encoded char
*
**/
char *leet(char *str)
{
	char code1[] = "aAeEoOtTlL";
	char code2[] = "4433007711"

	int i, j;

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (str[i] == code1[j])
			{
				str[i] = code2[j];
			}
		}
	}
	return (str);
}
