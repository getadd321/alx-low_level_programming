#include "main.h"
#include <stdio.h>
/**
* times_table - prints the 9 times table, starting with 0
*
* Return: nothing
*/
void times_table(void)
{
	int i, j, r, m, d;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			r = i * j;
			if (r > 9)
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
