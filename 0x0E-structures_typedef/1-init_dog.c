#include <stdio.h>
#include "dog.h"

/**
 * init_dog - Initializes var type
 * @d: pointer to struct
 * @name: pointer to dog's name
 * @age: Dog's age
 * @owner: Pointer to dog's owner
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	{
		return;
	}

	(*d).name = name;
	(*d).age = age;
	(*d).owner = owner;
}
