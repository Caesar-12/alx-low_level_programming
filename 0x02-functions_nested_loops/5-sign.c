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
	int num = n;

	if (num > 0)
	{
		return (1);
		putchar('+');
	}
	else if (num == 0)
	{
		return (0);
		putchar('0');
	}
	else
	{
		return (-1);
		putchar('-');
	}
}