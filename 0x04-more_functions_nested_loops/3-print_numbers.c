#include "main.h"
#include <stdio.h>

/**
 * print_numbers - Func body
 * Description: Prints number 0-9
 * Return: void
 */

void print_numbers(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		putchar(i);
	}
	putchar('\n');
}
