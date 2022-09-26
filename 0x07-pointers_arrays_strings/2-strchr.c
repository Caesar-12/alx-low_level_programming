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
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			return (&s[i]);
		}
	}
	return (0);
}
