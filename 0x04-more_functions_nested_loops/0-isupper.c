#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _isupper - Function body
 * Description: Checks if a letter is of uppercase
 * @c: Letter or arg to receive
 * Return: 1 if uppercase and 0 if otherwise
 */

int _isupper(int c)
{
	if (c <= 'A' && c >= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
