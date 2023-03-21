#include "main.h"
/**
 *print_alphabet_x10 - prints the lower case alphabet 10 times
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void print_alphabet_x10(void)
{
	char c;
	int i;

	for (i = 0; i < 10; i++)
		for (c = 'a'; c <= 'z'; c++)
			_putchar(c);
		_putchar('\n');
}
