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
	int l = 0;
	char *c = s;
	int r = 0;
	int t;
	char str;

	while (*c != '\0')
	{
		c++;
		i++;
	}

	l = i - 1;

	for ( ; r < ((l / 2) + 1); r++)
	{
		t = (l - r);
		str = s[r];
		s[r] = s[t];
		s[t] = str;
	}
	_putchar('\n');
}
