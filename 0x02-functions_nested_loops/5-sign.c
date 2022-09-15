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
		putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		putchar(45);
		return (-1);
	}
	else
	{
		putchar(48);
		return (0);
	}
	putchar('\n');
}
