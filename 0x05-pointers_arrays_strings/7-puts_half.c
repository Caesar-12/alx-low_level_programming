#include <stdio.h>
#include "main.h"

/**
 * puts_half - Func body
 * Description: Prints out a half a string to stdout
 * @str: String to print to stdout
 * Return: void
 */

void puts_half(char *str)
{
	int i = 0;
	int l = 0;

	while (str[i] != '\0')
	{
		i++;
	}
	while (l <= ((i - 1) / 2))
	{
		_putchar(str[l]);
		l++;
	}
	_putchar('\n');
}
