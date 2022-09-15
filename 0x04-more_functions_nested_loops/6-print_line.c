#include <stdio.h>
#include "main.h"

/**
 * print_line - Main body
 * Description: Print n number of lines
 * @n: Int to receive
 */

void print_line(int n)
{
	int i;
	int num = n;

	for (i = '0'; i < num; i++)
	{
		if (num > 0)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
