#include "lists.h"
#include <stdlib.h>

/**
 * add_dnodeint - Adds a new node at the beginning of a list
 *
 * @head: Pointer to list head pointer
 * @n: int data to store in node
 *
 * Return: Address of new element
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
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
		*head = h = new;
	else
	{
		h = *head;
		new->next = h;
		h->prev = new;
		*head = h = new;
	}

	return (new);
}
