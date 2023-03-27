#include "main.h"
/**
 * rev_string - prints string to stdout in reverse
 *
 *@s: the input string
 *
 * Return: nothing
 **/
void rev_string(char *s)
{
	int s_len;
	int s_counter = 0;

	while (*s != '\0')
	{
		*s++;
		s_counter++;
	}
	s--;
	for (s_len = s_counter; s_len > 0; s_len--)
	{
		_putchar(*s);
		s--;

	}
}
