#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - Searches for an integer
 *
 * @array: Array to search from
 * @size: Size of array
 * @cmp: Pointer to func to compare with
 *
 * Return: Index of first 0ccurence
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);

	if (array != NULL && cmp != NULL)
	{
		for (i = 0; i < size; i++)
		{
			(*cmp)(*(array + i));
		}
	}
	if (i == size)
	{
		return (-1);
	}
	else
	{
		return (i);
	}
}
