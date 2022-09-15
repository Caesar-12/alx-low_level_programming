#include <stdio.h>
#include "main.h"

/**
 * print_most_numbers - Main body
 * Description: Prints int except 2 and 4
 * Return: Void
 */

void print_most_numbers(void)
{
	int i = 0;
	char num[] = "01356789";

	while (num[i] != '\0')
	{
		_putchar(num[i]);
		i++;
	}
	_putchar('\n');
}
