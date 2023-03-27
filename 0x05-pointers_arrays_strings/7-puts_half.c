#include "main.h"
/**
 * puts_half - prints half of string to stdout
 *
 *@str: the input string
 *
 * Return: nothing
 */
void puts_half(char *str)
{
	int s_len = 0;
	char *s = str;
	int i;
	int n;

	while (*s != '\0')
	{
		s++;
		s_len++;
	}
	if (s_len % 2 == 0)
	{
		n = s_len / 2;
	}
	n = (s_len - 1) / 2;

	for (i = n; i < s_len; i++)
	{
		_putchar(str[i]);

	}
	_putchar('\n');

}
