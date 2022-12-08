#include "lists.h"

/**
 * sum_dlistint - Prints all element of a list
 *
 * @head: Doubly linked list head pointer
 * Return: sum of data
 */

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *trav;
	int sum;

	if (head == NULL)
		return (0);

	trav = head;
	sum = 0;

	while (trav != NULL)
	{
		sum += trav->n;
		trav = trav->next;
	}
	return (sum);
}
