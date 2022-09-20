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

	while (i >= 0)
	{
		if (s[r] != '\0')
		{
			s[r] = s[i];
			r++;
			i--;
		}

	}
	s[r] = '\0';
	_putchar('\n');
}
