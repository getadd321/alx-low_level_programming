#include "main.h"
/**
 * puts2 - prints string to stdout
 *
 *@str: the input string
 *
 * Return: nothing
 */
void puts2(char *str)
{
	int s_len = 0;
	char *s = str;
	int i;

	while (*s != '\0')
	{
		s++;
		s_len++;
	}
	for (i = 0; i < s_len; i++)
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');

}
