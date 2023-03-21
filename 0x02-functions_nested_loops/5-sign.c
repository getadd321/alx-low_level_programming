#include "main.h"
/**
* print_sign - Prints the sign of an input number
*
* @n: is an integer
*
* Return: 1 if n is greater than zero. 0 if n is zero.
* -1 ` n is less than zero.
*/
int print_sign(int n)
{
	if (n > 0)
		_putchar('+');
		return (1);
	else if (n == 0)
		_putchar('0');
		return (0);
	else
		_putchar('-');
		return (-1);
	_putchar('\n');
}
