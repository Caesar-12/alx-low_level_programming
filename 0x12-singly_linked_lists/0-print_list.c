#include <stdio.h>
#include <string.h>
#include "lists.h"

/**
 * print_list - prints strings in a linked list
 *
 * @h: pointer to nodes
 *
 * Return: number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t eleNum = 0;

	while (h != NULL)
	{
		if (h == NULL)
		{
			printf("[0] (nil)");
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
		}

		eleNum++;
		h = h->next;
	}
	return (eleNum);
}
