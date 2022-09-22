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
	int len = 0;
	char alpha[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char encode[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdejghijklm";

	for (i = 0; c[i] != '\0'; i++)
	{
		while (alpha[len] != '\0')
		{
			if (c[i] != alpha[len])
			{
				len++;
			}
			else if (c[i] == alpha[len])
			{
				c[i] = encode[len];
				len = 0;
			}
		}
	}
	return (c);
}
