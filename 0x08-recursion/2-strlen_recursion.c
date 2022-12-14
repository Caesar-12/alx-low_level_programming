#include <stdio.h>
#include "main.h"

/**
 * _strlen_recursion - Gets a string length
 * @s: String to gets it length
 * Return: Lenght of string
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}

	s++;
	return (1 + _strlen_recursion(s));
}
