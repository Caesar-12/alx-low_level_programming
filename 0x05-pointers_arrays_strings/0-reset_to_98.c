#include <stdio.h>
#include "main.h"

/**
 * reset_to_98 - Resetting body
 * Description: Reset a given int value using pointers and adresses
 * @n: Variable to be reset
 * Return: void
 */

void reset_to_98(int *n)
{
	int *p;

	p = n;
	*p = 98;
}
