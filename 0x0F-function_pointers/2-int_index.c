#include <stdio.h>
#include "function_pointers.h"
/**
 * int_index - searches for an integer or non zero index
 * @array: array
 * @size:  size of the array
 * @cmp: pointer to function
 * Return: first element's index otherwise -1
 **/
int int_index(int *array, int size, int (*cmp)(int))
{
	unsigned int i;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}
