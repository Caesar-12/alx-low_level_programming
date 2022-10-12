#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - Executes a function on each element
 * @array: Array to work on elements
 * @size: Size of array
 * @action: Pointer to func to execute
 *
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	if (array != NULL && action != NULL)
	{
		for (i = 0; i < (int)size; i++)
		{
			(*action)(*(array + i));
		}
	}
}
