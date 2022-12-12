#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _isdigit - Main funtion
 * Description: Checks if given character is a digit
 * @c: Char to be received
 * Return: 1 if digit and 0 if otherwise
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
