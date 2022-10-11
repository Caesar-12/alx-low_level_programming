#ifndef STRUCTURES
#define STRUCTURES dog.h

/**
 * struct dog - Defines a structure
 * @name: Dog's name
 * @age: Dog's age
 * @owner: Dog's owner
 */

struct dog_t
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

void print_dog(struct dog *d);
#endif
