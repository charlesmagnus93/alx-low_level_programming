#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - frees memory dogs
 * @d: pointer
 *
 * Return: 1
 */
void free_dog(dog_t *d)
{
	if (d != 0)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
