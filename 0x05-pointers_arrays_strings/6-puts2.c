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
	int i;

	while (*str != '\0')
	{
		str++;
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
