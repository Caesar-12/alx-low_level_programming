#include <stdio.h>
#include "main.h"

/**
 * _strspn - gets length
 * @s: String
 * @accept: bytes
 * Return: Length
 */
unsigned int _strspn(char *s, char *accept)
{
	int i;
	int num = 0;
	int len = 0;

	while (s[num] != '\0')
	{
		for (i = 0; accept[i] != '\0'; i++)
		{
			if (s[num] == accept[i])
			{
				len++;
				break;
			}
			else if (accept[i + 1] == '\0' && s[num] != accept[i])
			{
				return (len);
			}
		}
		num++;
	}
	return (len);
}
