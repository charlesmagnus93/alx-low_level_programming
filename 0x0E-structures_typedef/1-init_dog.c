#include <stdio.h>
#include "dog.h"

/**
 * init_dog - init dog
 *
 * @d: dog to init
 * @name: name
 * @age: age
 * @owner: owner
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->age = age;
		d->name = name;
		d->owner = owner;
	}
}
