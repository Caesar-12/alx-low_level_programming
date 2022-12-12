#include <stdio.h>
#include "main.h"

/**
 * _strcmp - Func body
 * @s1: First string to be compared
 * @s2: Second string to be compared
 * Return: Comparison result
 */

int _strcmp(char *s1, char *s2)
{
	int len = 0;

	while (s1[len] != '\0' && s2[len] != '\0')
	{
		if (s1[len] != s2[len])
		{
			return (s1[len] - s2[len]);
		}
		len++;
	}
	return (0);
}
