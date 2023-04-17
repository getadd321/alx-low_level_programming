#include "dog.h"
#include <stdlib.h>
/**
* new_dog - creates a new dog
* @name: pointer to name of the dog
* @age: age of the dog
* @owner: pointer to the name of the owner
* Return: NULL if the function fails
**/
dog_t *new_dog(char *name, float age, char *owner)
{
	int i, len_name = 0, len_owner = 0;
	struct dog *ndog = NULL;

	while (name[len_name] != '\0')
		len_name++;
	while (owner[len_owner] != '\0')
		len_owner++;
	ndog = malloc(sizeof(struct dog));
	if (ndog == NULL)
		return (NULL);
	ndog->name = malloc(sizeof(char) * (len_name + 1));
	if (ndog->name == NULL)
	{
		free(ndog);
		return (NULL);
	}
	ndog->owner = malloc(sizeof(char) * (len_owner + 1));
	if (ndog->owner == NULL)
	{
		free(ndog->name);
		free(ndog);
		return (NULL);
	}
	for (i = 0; i <= len_name; i++)
		ndog->name[i] = name[i];
	for (i = 0; i <= len_owner; i++)
		ndog->owner[i] = owner[i];
	ndog->age = age;
	return (ndog);
}
