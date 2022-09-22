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
		len = 0;

		while (alpha[len] != '\0' && c[i] != alpha[len])
		{
			len++;
		}
		if (c[i] != alpha[len])
		{
			c[i] = encode[len];
		}
	}
	return (c);
}
