#include "main.h"
/**
 * print_rev - prints string to stdout in reverse
 *
 *@s: the input string
 *
 * Return: 0
 */
void print_rev(char *s)
{
	int s_len = 0;
	int c = 0;

	while (*s != '\0')
	{
		s_len++;
		s++;
	}
	s--;
	for (c = s_len; c > 0; c--)
	{
		_putchar(*s);
		s--;
	}
	_putcahr('\n');
}
