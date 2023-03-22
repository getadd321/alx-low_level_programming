#include "main.h"
#include <stdio.h>
/**
* times_table - prints the 9 times table, starting with 0
*
* Return: nothing
*/
void times_table(void)
{
	int i, j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			if (j == 9)
			{
				printf("2%d", i * j);
				continue;
			}
			printf("2%d, ", i * j);
		}
	}
	printf("\n");
}
