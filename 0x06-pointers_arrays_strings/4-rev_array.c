#include "main.h"
/**
*reverse_array - prints array elements in reverse
*
*@a: array of strings
*
*@n: number of elements swap
*
*Return: nothing
**/
void reverse_array(int *a, int n)
{
	int i = 0;
	int j = n - 1;

	while (i < j)
	{
		int temp = a[i];

		a[i] = a[j];
		a[j] = temp;
		i++;
		j--;
	}
}
