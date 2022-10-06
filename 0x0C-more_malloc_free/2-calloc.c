#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * _calloc - Allocates space and initialize to 0
 * @nmemb: number of elements
 * @size: size of data type
 * Return: A pointer to new space
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	void *space;

	if (nmemb <= 0 || size <= 0)
	{
		return (NULL);
	}

	space = malloc(nmemb * size);

	if (space == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < nmemb * size; i++)
	{
		*((char *)space + i) = 0;
	}
	return (space);
}
