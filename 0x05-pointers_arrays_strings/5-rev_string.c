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
	char rev = s[0];
	int c = 0;
	int i;

	while (s[c] != '\0')
	{
		c++;
	}
	for (i = 0; i < c; i++)
	{
		c--;
		rev = s[i];
		s[i] = s[c];
		s[c] = rev;
	}
}
