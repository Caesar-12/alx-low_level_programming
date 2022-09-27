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
	int dim;
	int lead_diagsum = 0;
	int sec_diagsum = 0;

	for (pos = 0; pos < size; pos++)
	{
		dim = ((pos * size) + pos);
		lead_diagsum += a[dim];
	}

	for (pos = 1; pos < size; pos++)
	{
		pos = ((pos * size) - pos);
		sec_diagsum += a[dim];
	}
	printf("%d %d \n", lead_diagsum, sec_diagsum);
}
