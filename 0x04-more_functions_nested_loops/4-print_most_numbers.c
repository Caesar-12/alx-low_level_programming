#include <stdio.h>
#include "main.h"

/**
 * print_most_numbers - Main body
 * Description: Prints int except 2 and 4
 * Return: Void
 */

void print_most_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		if (i != 2 && i != 4)
		{
			putchar(i);
		}
	}
	putchar('\n');
}
