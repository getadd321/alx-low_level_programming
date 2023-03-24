#include <stdio.h>
/**
 * main -Entry point
 *
 * Return: 0 Always(Success)
 */
int main(void)
{
	long long num = 612852475143;
	long long factor = 2;

	while (num > factor)
	{
		if (num % factor == 0)
		{
			num /= factor;
			factor--;
		}
		factor++;

	}
	printf("%lld\n", factor);
	return (0);
}
