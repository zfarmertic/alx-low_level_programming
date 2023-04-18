#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - a pointer for free struct
 *
 * @d: pointer to free
 *
 * Return: nothing
 */

void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
