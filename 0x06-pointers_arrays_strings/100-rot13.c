#include "main.h"
/**
*rot13 -  encodes a string using rot13
*
*@str: string input
*
*
*Return: encoded string
*
**/
char *rot13(char *str)
{
	char code_in[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char code_rot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	int i, j;

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (str[i] == code_in[j])
			{
				str[i] = code_rot[j];
			}
		}
	}
	return (str);
}
