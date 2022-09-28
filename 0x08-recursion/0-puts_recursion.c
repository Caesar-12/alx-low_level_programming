#include <stdio.h>
#include "main.h"

/**
 * _puts_recursion - Prints out a string
 * @s: string to be printed
 * Return: void
 */

void _puts_recursion(char *s)
{
	int i = 0;

	_putchar(s[i]);
	i++;

	if (s[i] != '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	s++;

	_puts_recursion(s);
}
