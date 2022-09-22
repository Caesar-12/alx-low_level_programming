#include <stdio.h>
#include "main.h"

/**
 * reverse_array - Func body
 * Description: Reverse int order in an array
 * @a: Array to reverse content
 * @n: Number of int in array a
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int len;
	int rev;

	for (len = 0; len < n--; len++)
	{
		rev = a[len];
		a[len] = a[n];
		a[n] = rev;
	}
}
