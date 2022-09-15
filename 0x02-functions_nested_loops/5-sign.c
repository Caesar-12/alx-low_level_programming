#include <stdio.h>
#include <stdlib.h>

/**
 * print_sign - Body
 *
 * Description: Prints out the sign of a number
 * @n: value to be received
 * Return: 1 if greater than 0, 0 if equal to 0, -1 if lesser than 0
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
