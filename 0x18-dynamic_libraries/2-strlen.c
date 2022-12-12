#include <stdio.h>
#include "main.h"

/**
 * _strlen - Func body
 * Description: Return the length of a string without using strlen func
 * @s: String to return length
 * Return: length of string
 */

int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		s++;
		len++;
	}

	return (len);
}
