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
	if (n < 0)
	{
		n *= -1;
	}

	_putchar('0' + (n % 10));
	return (n % 10);
}
