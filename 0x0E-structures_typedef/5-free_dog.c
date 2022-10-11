#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - frees dogs
 * @d: pointer to a dog of type dog_t
 *
 * Return: void
 */

void free_dog(dog_t *d)
{
	if (d == NULL)
	{
		return;
	}
	else
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
