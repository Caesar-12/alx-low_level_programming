#include <stdio.h>
#include "main.h"

/**
 * print_binary - prints binary equivalent of a decimal
 *
 * @n: Decimal num to conv
 *
 * Return: void
 */

void print_binary(unsigned long int n)
{
	int len = 0;
	unsigned long int num = n;

	while (num > 0)
	{
		len++;
		num >>= 1;
	}
	len -= 1;

	if (n == 0)
		putchar('0');

	while (len >= 0)
	{
		if ((n >> len) & 1)
			putchar('1');
		else
			putchar('0');
		len--;
	}
}
