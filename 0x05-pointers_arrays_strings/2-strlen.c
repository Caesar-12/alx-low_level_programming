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
	char *p;
	int len;

	p = s;

	len = sizeof(*p);

	return (len);
}
