#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - initializes the struct dog
 * @d: pointer to struct
 * @name: the name of the dog
 * @age: the age
 * @owner: the name
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
