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
	for (; (int)idx != 1; idx--)
		temp = temp->next;
	temp = temp->next;
	if (temp->prev != NULL && temp->next != NULL && idx != 0)
	{
		temp2 = temp->prev;
		temp2->next = new;
		new->prev = temp2;
		temp->prev = new;
		new->next = temp;
	}
	else if (temp->prev == NULL && temp->next == NULL && idx == 0)
	{
		temp->prev = new;
		new->next = temp;
		*h = new;
	}

	return (new);
}
