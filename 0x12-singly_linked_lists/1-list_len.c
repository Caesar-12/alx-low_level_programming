#include <stdio.h>
#include <string.h>
#include "lists.h"

/**
 * list_len - returns number of elements in a linked list
 *
 * @h: pointer to nodes
 *
 * Return: number of nodes
 */

size_t list_len(const list_t *h)
{
	size_t eleNum = 0;

	while (h != NULL)
	{
		eleNum++;
		h = h->next;
	}
	return (eleNum);
}
