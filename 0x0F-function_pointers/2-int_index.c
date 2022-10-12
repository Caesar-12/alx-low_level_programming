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
	int i, num;

	if (size <= 0 || array == NULL || cmp == NULL)
		return (-1);

	if (array != NULL && cmp != NULL)
	{
		for (i = 0; i < size; i++)
		{
			num = (*cmp)(*(array + i));
			if (num)
				return (i);
		}
		return (-1);
	}
}
