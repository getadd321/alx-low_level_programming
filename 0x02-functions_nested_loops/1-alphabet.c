#include "main.h"
/**
* print_alphabet - prints alphabets in lower-case
*
* Return: 0 Always(Success)
*/
void print_alphabet(void)
{
	char c;

	for (c >= 'a'; c <= 'z'; c++)
		_putchar(c);
	_putchar('\n');
}
