#include "main.h"
/**
 * print_diagsums -  prints the sum of the two diagonals
 * @a: points to array of integer
 * @size: size of the array input
 * Return: Nothing
 **/
void print_diagsums(int *a, int size);
{
	int i;
	int sum1 = 0;
	int sum2 = 0;

	for (i = 0; i < size; i++)
	{
		sum1 += *(a + i * size + i);
		sum2 += *(a + i * size + (size - i - 1));

	printf("%d, %d\n", sum1, sum2);
}
