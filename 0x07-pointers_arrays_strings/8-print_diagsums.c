#include <stdio.h>
#include "main.h"

/**
 * print_diagsums - Prints sum of the two diagonals
 * @a: Matrix to sum up diagonals
 * @size: Matrix dimension
 * Return: void
 */

void print_diagsums(int *a, int size)
{
	int pos;
	int lead_diagsum;
	int sec_diagsum;

	for (pos = 0; pos < size; pos++)
	{
		pos = ((pos * size) + pos);
		lead_diagsum += pos;
	}

	for (pos = 1; pos < size; pos++)
	{
		pos = ((pos * size) - pos);
		sec_diagsum += pos;
	}
	printf("%d %d \n", lead_diagsum, sec_diagsum);
}
