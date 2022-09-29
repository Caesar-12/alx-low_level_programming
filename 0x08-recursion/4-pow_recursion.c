#include <stdio.h>
#include "main.h"

/**
 * _pow_recursion - Calculates index power
 * @x: int to be indexed
 * @y: index value for x
 * Return: resulting value from index
 */

int _pow_recursion(int x, int y)
{
	if (y == 1)
	{
		return (x);
	}

	return (x * _pow_recursion(x, y));
	y--;
}
