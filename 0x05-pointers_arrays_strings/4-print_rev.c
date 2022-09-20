#include <stdio.h>
#include "main.h"

/**
 * print_rev - Func body
 * Description: Prints out a string in rev to stdout
 * @str: String to print to stdout
 * Return: void
 */

void print_rev(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		i++;
	}

	while (i > 0)
	{
		_putchar(str[i]);
		i--;
	}
	_putchar('\n');
}
