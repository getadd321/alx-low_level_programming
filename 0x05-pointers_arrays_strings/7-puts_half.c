#include "main.h"
#include <string.h>
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
	int half_len = s_len / 2;

	if (s_len % 2 != 0)
	{
		half_len = (s_len - 1) / 2;
		str += half_len;
	}
	else
	{
		str += half_len;
	}

	while (*str != '\0')
	{
		_putchar(*str);
		str++;

	}
	_putchar('\n');

}
