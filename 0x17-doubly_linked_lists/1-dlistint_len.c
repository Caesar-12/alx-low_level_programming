#include "lists.h"

/**
 * dlistint_len - Prints all element of a list
 *
 * @h: Doubly linked list head pointer
 * Return: number of nodes
 */

size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *trav;
	size_t nodes;

	trav = h;
	nodes = 0;

	while (trav != NULL)
	{
		trav = trav->next;
		nodes++;
	}
	return (nodes);
}
