#include "dog.h"
#include <stdlib.h>
/**
*init_dog - initialize a variable of type struct dog
*
* @d: pointer to struct dog
* @name: pointer name of the dog string
* @age: age of the dog
* @owner: pointer to the name of the owner of the dog
* Return : nothing
**/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc (sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}

