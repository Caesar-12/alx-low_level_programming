#include <stdio.h>
#include <stdlib.h>

/**
 * times_table - Main body
 * Description: Prints multiplication table
 */

void times_table(void)
{
	int times;
	int across;
	int down;

	for (across = 0; across <= 9; across++)
	{
		for (down = 0; down <= 9; down++)
		{
			times = (down * across);

			if (down == 0)
			{
				putchar('0' + times);
			}
			else if (times <= 9)
			{
				putchar(',');
				putchar(' ');
				putchar(' ');
				putchar('0' + times);
			}
			else if (times > 9)
			{
				putchar(',');
				putchar(' ');
				putchar('0' + (times / 10));
				putchar('0' + (times % 10));
			}
		}
		putchar('\n');
	}
}
