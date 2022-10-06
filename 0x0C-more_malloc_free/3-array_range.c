#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * array_range - Make array of defined range and member
 * @min: Minimum array value
 * @max: maximum array value
 * Return: Pointer to new array
 */

int *array_range(int min, int max)
{
	int i, num;
	int range;
	int *space;

	if (min > max)
		return (NULL);

	range = (max - min) + 1;
	num  = min;
	space = (int *) malloc(sizeof(int) * range);

	if (space == NULL)
		return (NULL);

	for (i = 0; i <= range; i++)
	{
		*(space + i) = num;
		num++;
	}
	return (space);
}
