#include <stdio.h>
#include <stdlib.h>

/**
 * print_to_98 - Main body
 * Description: prints int to 98
 * @n: int arg
 */

void print_to_98(int n)
{
	while (n < 98)
	{
		printf("%d, ", n);
		n++;
	}

	while (n > 98)
	{
		printf("%d, ", n);
		n--;
	}

	if (n == 98)
	{
		printf("%d", n);
	}

	putchar('\n');
}
