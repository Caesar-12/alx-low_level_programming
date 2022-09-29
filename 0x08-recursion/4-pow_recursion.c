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
	if (x == 0)
	{
		return (0);
	}
	else if (y < 0)
	{
		return (-1);
	}
	else if (x == 1 || y == 0)
	{
		return (1);
	}

	return (x * _pow_recursion(x, y - 1));
}
