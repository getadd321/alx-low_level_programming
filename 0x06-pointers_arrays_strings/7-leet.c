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
	char char_encoder[26][2] = {{'a', '4'}, {'b', 'b'}, {'c', 'c'}
		, {'d', 'd'}, {'e', '3'}, {'f', 'f'}, {'g', '6'}
		, {'h', 'h'}, {'i', 'i'}, {'j', 'j'}, {'k', 'k'}
		, {'l', '1'}, {'m', 'm'}, {'n', 'n'}, {'o', '0'}
		, {'p', 'p'}, {'q', 'q'}, {'r', 'r'}, {'s', 's'}
		, {'t', '7'}, {'u', 'u'}, {'v', 'v'}, {'w', 'w'}
		, {'x', 'x'}, {'y', 'y'}, {'z', 'z'}};

	int i, j;

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j < 26; j++)
		{
			if (str[i] == char_encoder[j][0] || str[i] == char_encoder[j][0] - 32)
			{
				str[i] = char_encoder[j][1];
				break;
			}
		}
	}
	return (str);
}
