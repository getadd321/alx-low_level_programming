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
	int i, n, j;

	for (i = 0; str[i] != '\0'; i++)
	{
		s_len++;
	}
	n = (s_len % 2 == 0) ? s_len / 2 : (s_len - 1) / 2;
	for (j = n; str[j] != '\0'; j++)
	{
		_putchar(str[j]);
	}
	_putchar('\n');
}
