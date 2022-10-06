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

	space = malloc(nmemb * size);

	if (nmemb <= 0 || size <= 0)
	{
		return (NULL);
	}
	else if (space == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < nmemb; i++)
	{
		*((char *)space + i) = 0;
	}
	return (space);
}
