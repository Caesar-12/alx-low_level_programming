#include <stdlib.h>
#include <stdio.h>

/**
 * print_triangle - Main body
 * Description: Prints triangle of given size using #
 * @size: Length and width of triangle
 * Return:void
 */

void print_triangle(int size)
{
	int space;
	int body;
	int thick;

	if (size > 0)
	{
		for (body = 1; body <= size; body++)
		{
			for (space = 1; space <= (size - body); space++)
			{
				putchar(' ');
			}
			for (thick = 1; thick <= body; thick++)
			{
				putchar('#');
			}
			putchar('\n');
		}
	}
	else
		putchar('\n');
}
