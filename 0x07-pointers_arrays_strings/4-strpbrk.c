#include <stdio.h>
#include "main.h"

/**
 * *_strpbrk - Searches for any set of bytes
 * @s: String
 * @accept: match
 * Return: A pointer that points the first occurence of any byte in accept
 */

char *_strpbrk(char *s, char *accept)
{
	int len;
	int num = 0;
	char *p;

	while (s[num] != '\0')
	{
		for (len = 0; accept[len] != '\0'; len++)
		{
			if (s[num] == accept[len])
			{
				p = &s[num];
				return (p);
			}
		}
		num++;
	}
	return ('\0');
}
