#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * Description: Printing combinations
 * Return: Always 0 (Success)
 */

int main(void)
{
	int l = '0';

	while (l <= '9')
	{
		putchar(l);
		putchar(',');
		putchar(' ');
		l++;
	}
	putchar('\n');
	return (0);
}
