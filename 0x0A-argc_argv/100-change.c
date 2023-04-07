#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
*main - prints the minimum number of coins
*@argc: number of arguments passed to the program
*@argv: an array of pointer to the arguments
*Return: Always 0 (Sucess)
*
*/
int main(int argc, char *argv[])
{
	int coins[] = {25, 10, 2, 1};
	int cents, count, i;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	cents = atoi(argv[1]);

	count = 0;

	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}
	for (i = 0; i < 5 && cents >= 0; i++)
	{
		while (cents >= coins[i])
		{
			count++;
			cents -= coins[i];
		}
	}
	printf("%d\n", count);
	return (0);
}
