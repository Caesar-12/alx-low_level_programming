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
	dlistint_t *temp, *affirm;
	int comp, comp2, nodes;

	comp = comp2 = index;
	nodes = 0;
	temp = affirm = head;
	while (affirm)
	{
		affirm = affirm->next;
		nodes++;
	}
	if (comp2 > nodes)
		return (NULL);
	while (comp > 0)
	{
		temp = temp->next;
		comp--;
	}

	return (temp);
}
