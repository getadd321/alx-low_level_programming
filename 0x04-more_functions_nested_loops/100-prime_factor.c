#include <stdio.h>
/**
 * main -Entry point
 *
 * Return: 0 Always(Success)
 */
int main(void)
{
	long long int n = 612852475143;
	long long int i, max_prime_factor;

	while (n % 2 == 0)
	{
		n = n / 2;
		max_prime_factor = 2;

	}

	for (i = 3; i * i <= n; i += 2)
	{
		while (n % i == 0)
		{
			n = n / i;
			max_prime_factor = i;
		}
	}
	if (n > 2)
	{
		max_prime_factor = n;
	}
	printf("%lld\n", max_prime_factor);
	return (0);
}
