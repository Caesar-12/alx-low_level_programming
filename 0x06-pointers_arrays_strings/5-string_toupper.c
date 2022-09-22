#include <stdio.h>
#include "main.h"

/**
 * string_toupper - Function body
 *
 * Description: Converts string to uppercase
 *
 * @c: string to be converted
 * Return: returns uppercase
 */

char *string_toupper(char *c)
{
	int i;

	for (i = 0; c[i] != 0; i++)
	{
		if (c[i] >= 'a' && c[i] <= 'z')
		{
			/*sunbtract 32 from the ascii value to convert to uppercase*/
			c[i] = c[i] - 32;
		}
	}
	return (c);
}
