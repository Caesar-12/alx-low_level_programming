#include <stdlib.h>
#include "lists.h"

/**
 * get_dnodeint_at_index - Gets nth node
 *
 * @head: list to get nth node
 * @index: node position to get
 *
 * Return: nth node
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp;
	int comp;

	comp = index;
	temp = head;
	while (comp > 0)
	{
		temp = temp->next;
		comp--;
	}

	return (temp);
}
