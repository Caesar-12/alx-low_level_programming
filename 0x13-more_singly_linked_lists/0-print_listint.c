#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_listint - Print integers
 *
 * @h: node
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	if (h == NULL)
		return (count);

	while (h != NULL)
	{
		printf("%d\n", h->n);
		count++;
	}

	return (count);
}
