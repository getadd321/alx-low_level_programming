#include <stdio.h>
/**
 * main -Entry point
 *
 * Return: 0 Always(Success)
*/

#include <math.h>

int main(void)
{
	long long num = 61285247514
	long long max_factor = -1;

	while (num % 2 == 0)
	{
		max_factor = 2;
		num /= 2;
	}
	for (long long i = 3; i <= sqrt(num); i += 2)
	{
		while (num % i == 0)
		{
			max_factor = i;
			num /= i;
		}
	}
	if (num > 2)
	{
		max_factor = num;
	}
	printf("%lld\n", max_factor);
	return (0);
}

