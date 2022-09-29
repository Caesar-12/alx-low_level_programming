#include <stdio.h>
#include "main.h"

/**
 * _print_rev_recursion - Prints recursion in reverse with recursion
 * @s: string to print in reverse
 * Return: void
 */

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	_print_rev_recursion(s);
	_putchar(*s);
}
