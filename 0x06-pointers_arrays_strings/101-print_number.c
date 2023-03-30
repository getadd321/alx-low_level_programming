#include "main.h"
/**
*print_number - prints an integer.
*
*@n: input integer
*
*
*Return: nothing
**/
void print_number(int n)
{
	int num = n;

	if (n < 0)
	{
		_putchar('-');
		num = -n;
	}
	if (n / 10 != 0)
	{
		_putchar(num / 10)
	}
	_putchar((num % 10) + '0');
}

