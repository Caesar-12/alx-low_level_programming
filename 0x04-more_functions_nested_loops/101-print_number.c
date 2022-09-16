#include <stdio.h>
#include "main.h"

/**
 * print_number - Main body
 * Description: Prints out given integers
 * @n: integer to be printed
 * Return: void
 */

void print_number(int n)
{
	unsigned int tens, num, pos = n;
	double dou = 1;

	if (n == 0)
		_putchar('0');
	else
	{
		if (n < 0)
		{
			pos = n * -1;
			_putchar('-');
		}

		while (dou <= pos)
		{
			dou *= 10;
		}
		tens = dou / 10;

		while (tens >= 1)
		{
			num = pos / tens;
			_putchar(num + '0');
			pos = (pos - (tens * num));
			tens /= 10;
		}
	}
}
