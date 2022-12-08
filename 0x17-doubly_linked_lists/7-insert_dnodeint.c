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
	int num, nodes;

	if (*h == NULL)
		return (NULL);

	num = idx;
	nodes = 0;
	temp = temp2 = *h;
	new = (dlistint_t *)malloc(sizeof(dlistint_t));
	new->n = n;
	new->next = NULL;
	new->prev = NULL;

	while (temp != NULL)
	{
		temp = temp->next;
		nodes++;
	}
	if (num > nodes)
		return (NULL);
	temp = *h;
	while (num > 1)
	{
		temp = temp->next;
		temp2 = temp2->next;
		num--;
	}
	temp2 = temp2->next;

	temp->next = new;
	new->prev = temp;
	temp2->prev = new;
	new->next = temp2;

	return (new);
}
