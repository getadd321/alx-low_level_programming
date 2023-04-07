#include "main.h"
#include <stdio.h>
/**
*main - prints the name of the program
*@argc: number of arguments passed to the program
*@argv: an array of pointers to the arguments
*Return: Always 0 (Sucess)
*
*/
int main(int argc __attribute__((unused)), char *argv[])
{
	int i;

	for (i = 0; argv[0][i]; i++)
	{
		putchar(argv[0][i]);
	}
	putchar('\n');
	return (0);
}
