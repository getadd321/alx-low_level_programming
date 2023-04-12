#include "main.h"
#include <stdlib.h>
/**
 * array_range - creates an array of integers
 * @min:minimum elements stored
 * @max: maximum elements stored
 * Return: pointer to the created array
 */
int *array_range(int min, int max)
{
	int *array, i, total_size = 0;

	total_size = max - min + 1;

	if (min > max)
		return (NULL);

	array = malloc(sizeof(int) * total_size);

	if (array == NULL)
	{
		return (NULL);
	}
	for (i = 0; min <= max; i++)
		array[i] = min++;
	return (array);
}
