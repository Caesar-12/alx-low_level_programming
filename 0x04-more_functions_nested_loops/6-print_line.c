#include <stdio.h>
#include "main.h"

/**
 * print_line - Main body
 * Description: Print n number of lines
 * @n: Int to receive
 */

void print_line(int n)
{
	char i;

	for (i = '0'; i <= n; i++)
	{
		if (n > 0)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
