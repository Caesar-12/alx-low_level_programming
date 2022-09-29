#include <stdio.h>
#include "main.h"

/**
 * square_root - Gets the square root of given int
 * @n: int to get square root
 * @root: Actual root
 * Return: Actual root of given int
 */

int square_root(int n, int root)
{
	if ((root * root) == n)
	{
		return (root);
	}
	else if ((root * root) > n)
	{
		return (-1);
	}

	return (square_root(n, root + 1));
}

/**
 * _sqrt_recursion - Calculates the natural square root of a number
 * @n: Int to calculate square root
 * Return: Natural square root ofgiven int
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (square_root(n, 0));
	}
}
