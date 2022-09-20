#include <stdio.h>
#include "main.h"

/**
 * puts2 - Func body
 * Description: Prints out a string to stdout with omission
 * @str: String to print to stdout
 * Return: void
 */

void puts2(char *str)
{
	int i = 0;
	int l = 0;

	while (str[i] != '\0')
	{
		i++;
	}
	while (l <= (i - 1))
	{
		_putchar(str[l]);
		l = l + 2;
	}
	_putchar('\n');
}
