#include "main.h"

/**
 * print_number - prints numbers using putchar
 * @n: The input
 *
 * Return:nothing
 */

void print_number(int n)
{
	unsigined int i = n;

	if (n < 0)
	{
		_putchar(45);
		i = -i;
	}
	if (i / 10)
	{
		print_number(i / 10);
	}
	_putchar(i % 10 + '0');
}
