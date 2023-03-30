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
	int divisor = 1;

	if (n < 0)
	{
		_putchar('-');
		num = -n;
	}

	while (num / divisor >= 10)
	{
		divisor *= 10;
	}
	while (divisor != 0)
	{
		int digit = num / divisor;

		_putchar(digit + '0');
		num %= divisor;
		divisor /= 10;
	}
}

