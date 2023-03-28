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
	unsigned int s_len = 0;
	int i, n;

	while (*str)
	{
		s_len++;
		str++;
	}
	for (i = 0; i < s_len; i++)
	{
		str--;
	}
	if ((s_len % 2) == 0)
	{
		n = s_len / 2;
	}
	else
	{
		n = (s_len - 1) / 2;
	}
	for (i = n; i < s_len; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
