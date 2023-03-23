#include "main.h"

/**
 * print_most_numbers - prints numbers 0 to 9
 *
 * Return: nothing
 */
void print_most_numbers(void)
{
	int r;

	for (r = 48; r < 58; r++)
		if (r == 50 && r == 52)
			_putchar(r);
	_putchar('\n');
}
