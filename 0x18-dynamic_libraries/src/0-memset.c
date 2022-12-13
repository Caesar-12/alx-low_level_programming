#include <stdio.h>
#include "main.h"

/**
 * *_memset - Fills memory with a constant byte
 * @s: pointer
 * @b: Constant byte
 * @n: Number of bytes
 * Return: Returns pointer s
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i;

	i = 0;

	while (n > 0)
	{
		s[i] = b;
		i++;
		n--;
	}
	return (s);
}
