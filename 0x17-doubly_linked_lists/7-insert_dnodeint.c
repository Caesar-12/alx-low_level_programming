#include <stdlib.h>
#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts node at nth position
 *
 * @h: Pointer to list head pointer
 * @idx: inxex position to insert node
 * @n: Value for node
 *
 * Return: address of new node or NULL if fail
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *temp, *temp2, *new;
	unsigned int nodes;

	if (*h == NULL)
		return (NULL);
	temp = temp2 = *h;
	new = (dlistint_t *)malloc(sizeof(dlistint_t));
	new->n = n;
	new->next = NULL;
	new->prev = NULL;
	for (nodes = 0; temp != NULL; nodes++)
		temp = temp->next;
	if (idx > nodes)
		return (NULL);
	temp = *h;
	for (; (int)idx > 1; idx--)
		temp = temp->next;
	temp2 = temp->next;

	if (idx == 0)
	{
		new->next = temp;
		temp->prev = new;
		*h = new;
		return (new);
	}
	temp->next = new;
	new->prev = temp;
	temp2->prev = new;
	new->next = temp2;

	return (new);
}
