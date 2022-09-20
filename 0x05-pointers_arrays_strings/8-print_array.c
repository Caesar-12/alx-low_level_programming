#include <stdio.h>
#include "main.h"

/**
 * print_array - Func body
 * Description: Prints n number of elements
 * @a: Array to be printed
 * @n: Number of elements to be printed
 * Return: void
 */

void print_array(int *a, int n)
{
	int i = 0;

	while (i != n)
	{
		if (n > 0)
		{
			printf("%d", a[i]);
			i++;
			if (i <= (n - 1))
			{
				printf(", ");
			}
		}
	}
	printf("\n");
}
