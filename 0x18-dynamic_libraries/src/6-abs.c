#include <stdio.h>
#include <stdlib.h>

/**
 * _abs - Main body
 * Description: Prints the absolute value of an integer
 * @n: integer to be received
 * Return: absolute value of integer
 */

int _abs(int n)
{
	if (n > 0)
	{
		return (n);
	}
	else if (n < 0)
	{
		int np = n * -1;

		return (np);
	}
	else
	{
		return (0);
	}
}
