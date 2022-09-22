#include <stdio.h>
#include "main.h"

/**
 * cap_string - Comvert initials to uppercase
 * @c: string to capitalize
 * Return: capitalized string
 */

char *cap_string(char *c)
{
	int i;

	for (i = 0; c[i] != '\0'; i++)
	{
		if (i == 0)
		{
			if ((c[i] >= 'a' && c[i] <= 'z'))
			{
				c[i] = c[i] - 32;
			}
			continue;
		}
		switch (c[i])
		{
			case ',':
			case ';':
			case '.':
			case '!':
			case '?':
			case '"':
			case ')':
			case '(':
			case '{':
			case '}':
			case ' ':
			case '\n':
			case '\t':
				i++;
				if (c[i] >= 'a' && c[i] <= 'z')
				{
					c[i] = c[i] - 32;
				}
		}
	}
	return (c);
}
