#include "main.h"
int is_prime_number_finder(int n, int i);
/**
*is_prime_number - returns 1 if the  number is a prime
*
*@n: input integer num
*
* Return: 1 if prime 0 otherwise
*
**/
int is_prime_number(int n)
{
	if (n < 2)
	{
		return (0);
	}
	return (is_prime_number_finder(n, n - 1));
}
/**
*is_prime_number_finder - helps to find if n is a prime num
*
*@n: input integer num
*@i: counter for iteration
*
*Return: 0 or 1
**/
int is_prime_number_finder(int n, int i)
{
	if (i == 1)
	{
		return (1);
	}
	else if (n % i == 0)
	{
		return (0);
	}
	return (is_prime_number_finder(n, i - 1));
}
