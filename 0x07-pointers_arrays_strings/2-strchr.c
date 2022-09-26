#include <stdio.h>
#include "main.h"

/**
 * *_strchr - Locates first experience
 * @s: Pointer to receive first occurence of char c
 * @c: Character to locate
 * Return: Returns pointer s
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			return (&s[i]);
		}
		i++;
	}
	return (0);
}
