#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * malloc_checked - Allocates memory using malloc
 * @b: Size of space to be allocated
 * Return: void
 */

void *malloc_checked(unsigned int b)
{
	void *space;

	space = (void *) malloc(b);

	if (space == NULL)
		exit(98);
	return (space);
}
