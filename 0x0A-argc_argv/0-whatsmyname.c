#include "main.h"
#include <stdio.h>
/**
*
*main - prints the program name
*@argc: counter
*@argv: pointer to array string
*Return: Always 0 for sucess
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
