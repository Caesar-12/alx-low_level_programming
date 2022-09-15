#include <stdio.h>
#include "main.h"

/**
 * print_line - Main body
 * Description: Print n number of lines
 * @n: Int to receive
 */

void print_line(int n)
{
	int times = n;

	for (times = n; times > 0; times--)
		_putchar('_');

	_putchar('\n');
}
