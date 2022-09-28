#include <stdio.h>
#include "main.h"

/**
 * _puts_recursion - Prints out a string
 * @s: string to be printed
 * Return: void
 */

void _puts_recursion(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		_putchar(s[i]);
	}
}
