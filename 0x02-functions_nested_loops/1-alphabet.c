#include "main.h"
/**
* print_alphabet - prints alphabets in lower-case
*
* Return: 0 Always(Success)
*/
void print_alphabet(void)
{
	int c;

	for (c >= 97; c <= 122; c++)
		_putchar(c);
	putchar('\n');
	return (0);
}
