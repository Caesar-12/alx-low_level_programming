#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint - Add nodes to the beginning of the tasks
 *
 * @head: pointer to nodes
 * @n: data for created node
 *
 * Return: returns address of new node
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *ptr;

	ptr = malloc(sizeof(listint_t));

	if (ptr == NULL)
		return (NULL);

	ptr->next = *head;
	ptr->n = n;

	*head = ptr;

	return (ptr);
}
