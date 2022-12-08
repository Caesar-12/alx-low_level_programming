#include <stdlib.h>
#include "lists.h"

/**
 * delete_dnodeint_at_index - inserts node at nth position
 *
 * @head: Pointer to list head pointer
 * @index: inxex position to insert node
 *
 * Return: 1 if succeeded, -1 if failed
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp, *temp_prev, *temp_next;
	unsigned int nodes;

	if (*head == NULL)
		return (-1);
	temp = temp_prev = temp_next = *head;
	for (nodes = 0; temp != NULL; nodes++)
		temp = temp->next;
	if (index > nodes)
		return (-1);
	temp = *head;
	for (; (int)index > 0; index--)
		temp = temp->next;
	if (temp->prev != NULL && temp->next != NULL)
	{
		temp_prev = temp->prev;
		temp_next = temp->next;
		temp_prev->next = temp_next;
		temp_next->prev = temp_prev;
		free(temp);
	}
	else if (temp->prev == NULL && temp->next != NULL)
	{
		temp_next = temp->next;
		temp_next->prev = NULL;
		*head = temp_next;
		free(temp);
	}
	else if (temp->next == NULL && temp->prev != NULL)
	{
		temp_prev = temp->prev;
		temp_prev->next = NULL;
		free(temp);
	}
	else if (temp->next == NULL && temp->prev == NULL)
	{
		*head = NULL;
		free(temp);
	}
	return (1);
}
