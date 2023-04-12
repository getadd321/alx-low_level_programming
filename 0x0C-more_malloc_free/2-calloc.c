#include "main.h"
#include <stdlib.h>
/**
 * _calloc - allocates memory for an array, using malloc
 * @nmemb: elements of an array
 * @size: size of an array
 * Return: pointer to the allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int total_size, i = 0;
	void *ptr;
	char *byte_ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(nmemb * size);

	if (ptr == NULL)
	{
		return (NULL);
	}
	byte_ptr = (char *)ptr;
	total_size = nmemb * size;

	for (i = 0; i < total_size; i++)
		byte_ptr[i] = 0;
	return (ptr);
}
