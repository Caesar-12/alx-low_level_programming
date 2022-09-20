#include <stdio.h>
#include "main.h"

/**
 * swap_int - Swapping body
 * Desription: Swapping two var values using pointers
 * @a: first int to swap it's value to b
 * @b: second int to swap it's value to a
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int *p;
	int *q;

	p = a;
	q = b;

	*p = b;
	*q = a;
}
