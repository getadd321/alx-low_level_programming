#include "main.h"

/**
 * print_diagonal - prints stright line
 *
 *@n: input number
 * Return: nothing
 */
void print_diagonal(int n)
{
	int i, j;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < (n - 1); j++)
			{
				_putchar('#');
			}
			_putchar('#');
			_putchar('\n');
		}
	}
	_putchar('\n');
}
