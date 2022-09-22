#include <stdio.h>
#include "main.h"

/**
 * rot13 - Encodes with rot-13 cypher
 * @c: String to encode
 * Return: Encoded string
 */

char *rot13(char *c)
{
	int i;
	int len;
	char alpha[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char encode[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdejghijklm";

	for (i = 0; c[i] != '\0'; i++)
	{
		for (len = 0; alpha[len] != '\0'; len++)
		{
			if (c[i] == alpha[len])
			{
				c[i] = encode[len];
				break;
			}
		}
	}
	return (c);
}
