#include <stdlib.h>
#include "lists.h"

/**
 * free_dlistint - Frees a list
 *
 * @head: List to free
 * Retuen: void
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *h;

	if (head == NULL)
		return;

	while (head != NULL)
	{
		h = head->next;
		free(head);
		head = h;
	}
}
