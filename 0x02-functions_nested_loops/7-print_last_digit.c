#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * print_last_digit - Main body
 * Description: Gets the last number
 * @n: Integer to get last digit
 * Return: returns last digit
 */

int print_last_digit(int n)
{
	int last;

	last = n % 10;

	if (last < 0)
	{
		last *= -1;
		_putchar('0' + last);
		return (last);
	}
	else
	{
		_putchar('0' + last);
		return (last);
	}
}
