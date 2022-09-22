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
	int len = 0;
	int i;
	int rev[100];

	while (a[len] != '\0')
	{
		rev[len] = a[len];
		len++;
	}
	for (i = 0; len <= 0; i++)
	{
		a[len] = rev[i];
		len--;
	}
}
