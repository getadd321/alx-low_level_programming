#include "main.h"
int _sqrt_finder(int n, int l, int h);
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
		return (_sqrt_finder(n, 0, n));
	}
}
/**
*_sqrt_finder - helps to find sqrt of n
*
*@n: input integer num
*@l: low interval of input
*@h: high interval of input
*
*Return: the square root of n
**/
int _sqrt_finder(int n, int l, int h)
{
	if (l > h)
	{
		return (-1);
	}
	else
	{
		int mid = (l + h) / 2;
		int mid_square = mid * mid;

		if (mid_square == n)
		{
			return (mid);
		}
		else if (mid_square > n)
		{
			return (_sqrt_finder(n, l, mid - 1));
		}
		return (_sqrt_finder(n, mid + 1, h));
	}
}
