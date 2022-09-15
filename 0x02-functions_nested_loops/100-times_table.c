#include <stdio.h>
#include <stdlib.h>

/**
 * print_times_table - Main computing body
 * Description: Print multiplication table up to received integer
 * @n: Int to be received
 */

void print_times_table(int n)
{
	int down;
	int across;
	int times;

	for (across = 0; across <= n; across++)
	{
		for (down = 0; down <= n; down++)
		{
			times = across * down;

			if (down == 0)
				putchar('0' + times);
			else
			{
				putchar(',');
				putchar(' ');
				if (times <= 9)
				{
					putchar('0' + times);
					putchar(' ');
					putchar(' ');
				}
				else if (times > 9 && times <= 99)
				{
					putchar('0' + times / 10);
					putchar('0' + times % 10);
					putchar(' ');
				}
				else if (times > 99)
				{
					putchar('0' + times / 100);
					putchar('0' + (times / 10) % 10);
					putchar('0' + times % 10);
				}
			}
		putchar('\n');
		}
	}
}
