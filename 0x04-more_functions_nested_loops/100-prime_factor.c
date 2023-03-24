#include <stdio.h>
#include<math.h>
/**
 * main -Entry point
 *
 * Return: 0 Always(Success)
 */
int main(void)
{
	long long int i, n = 612852475143;

	for (i = 3; i <= sqrt(n); i += 2)
	{
		while ((n % i == 0) && (n != i))
		{
			n /= i;
		}
	}
	printf("%lld", n);
	return (0);
}
