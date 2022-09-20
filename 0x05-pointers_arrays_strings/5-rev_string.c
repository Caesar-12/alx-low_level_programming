#include <stdio.h>
#include "main.h"

/**
 * rev_string - Func body
 * Description: Reverses a string
 * @s: String to reversed
 * Return: void
 */

void rev_string(char *s)
{
	int i = 0;
	int r = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	i = i - 1;

	while ( i >= 0)
	{
		s[-i] = s[i];
		r++;
		i--;
	}
	_putchar('\n');
}
