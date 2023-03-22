#include "main.h"
#include <stdio.h>
/**
* print_times_table - prints the 9 times table, starting with 0
*
*@n: is positive integer
*
* Return: nothing
*/
void print_times_table(int n)
{
	int i, j, r, m, d;

	if (n > 0 && n <= 15)
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				r = i * j;

				if (r > n)
				{
					m = r % 10;
					d = (r - m) / 10;
					printf(", %d%d", d, m);
				}
				else
				{
					if (j != 0)
					{
					printf(",  ");
					}
					printf("%d", r);
				}
			}
			printf("\n");
		}
	}
	printf("\n");
	printf("\n");
}
