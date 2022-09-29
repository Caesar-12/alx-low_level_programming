#include <stdio.h>
#include "main.h"

/**
 * factorial - Gives the factorial of a given int
 * @n: Number to evaluate factorial
 * Return: Factorial/
 */

int factorial(int n)
{
	if (n == 1)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}

	return (n * factorial(n - 1));
}
