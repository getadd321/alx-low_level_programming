#include "main.h"
#include <stdio.h>
/**
 *print_array - prints array elements
 *
 *@a: array
 *@n: index
 *
 * Return: 0
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d, ", a[i]);
	}
	printf("\n");
}
