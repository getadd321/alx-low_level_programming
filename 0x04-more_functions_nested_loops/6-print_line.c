#include "main.h"

/**
 * print_line - prints stright line
 *
 *@n: number of underscore symbol
 * Return: nothing
 */
void print_line(int n)
{
	if (n > 0)
	{
		int j;

		for (j = 0; j < n; j++)
		{
			_putchar('_');
		}
		_putchar('\n')
	}
	_putchar('\n')
}