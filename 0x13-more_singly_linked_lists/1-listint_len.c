#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * listint_len - Gets number of nodes
 *
 * @h: node
 * Return: number of nodes
 */

size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	if (h == NULL)
		return (count);

	while (h != NULL)
	{
		h = h->next;
		count++;
	}

	return (count);
}
