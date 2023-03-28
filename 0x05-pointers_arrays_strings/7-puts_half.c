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
	int i;
	int n;

	for (i = 0; str[i] != '\0'; i++)
	{
		s_len++;
	}
	if ((s_len % 2) == 0)
	{
		n = s_len / 2;
	}
	else
	{
		n = (s_len - 1) / 2;
	}
	for (i = n; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
