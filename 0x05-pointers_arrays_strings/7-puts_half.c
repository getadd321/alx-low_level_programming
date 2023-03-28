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
	int i, n;

	while (*str)
	{
		s_len++;
		str++;
	}
	for (i = 0 i < s_len ; i++)
	{
		str--;
	}
	n =  (s_len % 2 == 0) ? s_len / 2 : (s_len - 1) / 2;
	for (; n < s_len; s_len++)
	{
		_putchar(*str);
	}
	_putchar('\n');
}
