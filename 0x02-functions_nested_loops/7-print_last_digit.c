#include <stdio.h>
#include <stdlib.h>

/**
 * print_last_digit - Main body
 * Description: Gets the last number
 * @n: Integer to get last digit
 * Return: returns last digit
 */

int print_last_digit(int n)
{
	int last;

	if (n < 0)
	{
		n *= -1;
	}

	last = n % 10;

	return (last);
}
