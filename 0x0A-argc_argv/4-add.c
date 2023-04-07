#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
*main - adds positive numbers
*@argc: number of arguments passed to the program
*@argv: an array of pointer to the arguments
*Return: Always 0 (Sucess)
*
*/
int main(int argc, char *argv[])
{
	int i;
	int sum = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		int j;

		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
		}
	sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
