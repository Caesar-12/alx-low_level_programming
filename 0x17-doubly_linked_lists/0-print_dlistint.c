#include "lists.h"

/**
 * print_dlistint - Prints all element of a list
 *
 * @h: Doubly linked list head pointer
 * Return: number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *trav;
	size_t nodes;

	trav = h;
	nodes = 0;

	while (trav != NULL)
	{
		printf("%d\n", trav->n);
		trav = trav->next;
		nodes++;
	}
	return (nodes);
}
