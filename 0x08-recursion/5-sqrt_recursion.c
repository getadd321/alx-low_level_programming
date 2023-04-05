#include "main.h"
int _sqrt_finder(int n, int m);
/**
*_sqrt_recursion - returns the natural square root of a number
*
*@n: input integer num
*
* Return: the square root of n
*
**/
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (_sqrt_finder(n, 0));
	}
}
/**
*_sqrt_finder - helps to find sqrt of n
*
*@n: input integer num
*@m: low interval of input
*
*Return: the square root of n
**/
int _sqrt_finder(int n, int m)
{
	if (m * m > n)
	{
		return (-1);
	}
	else if (m * m == n)
	{
		return (m);
	}
	return (_sqrt_finder(n, m + 1));
}
