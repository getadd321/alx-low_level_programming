#include "main.h"

/**
 * print_number - checks if the input is a digit
 * @n: The input
 *
 * Return:nothing
 */

void print_number(int n)
{
	unsigined int i = n;

	if (n < 0)
	{
		_putchar('-');
		i = -i;
	}
	if (i / 10 != 0)
	{
		print_number(i / 10);
	}
	_putchar(i % 10 + '0');
}
