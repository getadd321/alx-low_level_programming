#include "main.h"

/**
 * _isdigit - checks if the input is a digit
 * @c: The input
 *
 * Return: 1 if digit, 0 otherwise.
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	return (0);
}
