#include "main.h"
#include <stdio.h>
/**
*main - prints the value of argc
*@argc: number of arguments passed to the program
*@argv: an array of pointers to the arguments
*Return: Always 0 (Sucess)
*
*/
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}