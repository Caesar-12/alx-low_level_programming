#include <stdio.h>
#include "main.h"

/**
 * reverse_array - Func body
 * @a: Array to reverse content
 * @n: Number of int in array a
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int len;
	int rev;

	for (len = 0; len < n; len++)
	{
		rev = a[len];
		a[len] = a[n];
		n--;
	}
}
