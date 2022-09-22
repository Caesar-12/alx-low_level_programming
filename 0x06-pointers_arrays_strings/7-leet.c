#include <stdio.h>
#include "main.h"

/**
 * leet - Encodes strings
 * @c: String to encode
 * Return: encoded string
 */

char *leet(char *c)
{
	int i;
	int len;

	char alpha[] = "aAeEoOtTlL";
	char encode[] = "4433007711";

	for (i = 0; c[i] != '\0'; i++)
	{
		for (len = 0; len < 10; len++)
		{
			if (c[i] == alpha[len])
			{
				c[i] = encode[len];
			}
		}
	}
	return (c);
}
