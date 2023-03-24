#include <stdio.h>
/**
 * main -Entry point
 *
 * Return: 0 Always(Success)
 */
int main(void)
{
	long num = 612852475143;
	int  i = 1;

	while (i++ < num / 2)
	{
		if (num % i == 0)
		{
			num /= factor;
			continue;
		}
		for (i = 3 ; i < num / 2; i += 2)
		{
			if (num % i == 0)
				num /= i;
		}
	}
	printf("%ld\n", num);
	return (0);
}
