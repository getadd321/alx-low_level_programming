#include "main.h"

/**
 * print_line - prints stright line
 *
 *@n: number of underscore symbol
 * Return: nothing
 */
void print_line(int n)
{
	while (n-- > 0)
	{
		_putchar('_');
	}
	_putchar('\n');
}
