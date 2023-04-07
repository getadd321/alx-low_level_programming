#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
*main - multiplies two numbers
*@argc: number of arguments passed to the program
*@argv: an array of pointers to the arguments
*Return: Always 0 (Sucess)
*
*/
int main(int argc, char *argv[])
{
	int i;
	int mul = 1;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}
	for (i = 1; i < argc; i++)
	{
		mul *= atoi(argv[i]);
	}
	printf("%d\n", mul);
	return (0);
}
