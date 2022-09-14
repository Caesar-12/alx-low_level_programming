#include <stdio.h>
#include <stdlib.h>

/**
 * jack_bauer - Main body
 * Description: full time list
 */

void jack_bauer(void)
{
	int h = 0;
	int m = 0;

	while (h < 24)
	{
		while (m < 60)
		{
			putchar('0' + (h / 10));
			putchar('0' + (h % 10));
			putchar(':');
			putchar('0' + (m / 10));
			putchar('0' + (m % 10));
			putchar('\n');
			m++;
		}
		m = 0;
		h++;
	}
}
