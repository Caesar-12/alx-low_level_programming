#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * print_times_table - Main computing body
 * Description: Print multiplication table up to received integer
 * @n: Int to be received
 */

void print_times_table(int n)
{
	int down, across, times;

	for (across = 0; across <= n; across++)
	{
		for (down = 0; down <= n; down++)
		{
			times = across * down;
			if (times <= 9)
			{
				_putchar('0' + times);
			}
			else if (times > 9 && times <= 99)
			{
				_putchar('0' + times / 10);
				_putchar('0' + times % 10);
			}
			else if (times > 99)
			{
				_putchar('0' + times / 100);
				_putchar('0' + (times / 10) % 10);
				_putchar('0' + times % 10);
			}
			if (down < n)
			{
				putchar(',');
				putchar(' ');
				if (times <= 99)
				{
					putchar(' ');
				}
				else if (times <= 9)
				{
					putchar(' ');
				}
			}
		}
	_putchar('\n');
	}
}
