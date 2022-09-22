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
		if (c[i] == ' ')
		{
			i++;

			if (c[i] >= 'a' && c[i] <= 'z')
			{
				c[i] = c[i] - 32;
				continue;
			}
		}
		else
		{
			if (c[i] >= 'A' && c[i] <= 'Z')
			{
				c[i] = c[i] + 32;
			}
		}
	}
	return (c);
}
