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
	int *space;

	space = (int *) malloc(b);

	if (space == NULL)
		return ((void *) 98);
	return (space);
}
