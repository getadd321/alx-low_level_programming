#include<stdio.h>
/**
* main -Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
	int i;

	for (i = 0; i < 10;  i++)
	{
		putchar(i + '0');
		putchar(i < 9 ? ',' : '\n');
		putchar(i < 9 ? ' ' : '\n');
	}
	putchar('\r');
	return (0);
}
