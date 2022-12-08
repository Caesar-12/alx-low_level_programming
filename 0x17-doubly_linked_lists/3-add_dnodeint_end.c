#include "lists.h"
#include <stdlib.h>

/**
 * add_dnodeint_end - Adds a new node at the beginning of a list
 *
 * @head: Pointer to list head pointer
 * @n: int data to store in node
 *
 * Return: Address of new element
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new;
	dlistint_t *h;

	new = (dlistint_t *)malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->prev = NULL;
	new->next = NULL;

	if (*head == NULL)
		*head = new;
	else
	{
		h = *head;
		while (h->next != NULL)
			h = h->next;

		h->next = new;
		new->prev = h;
	}

	return (new);
}
