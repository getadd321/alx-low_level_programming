#include<stdio.h>
/**
* main -Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
	int i, j, k, p;

	for (i = 0; i < 10;  i++)
	{
		for (j = 0; j < 9; j++)
		{
			for (k = 0 ; k < 10; k++)
			{
				for (p = 0; p < 10; p++)
				{
					putchar('0' + i);
					putchar('0' + j);
					putchar(' ');
					putchar('0' + k);
					putchar('0' + p);
					if (i == 9 && j == 8 && k == 9 && p == 9)
						continue;
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
