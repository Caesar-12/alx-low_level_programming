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
	int alpha[53] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k',
		'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z',
		'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O',
		'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};
	int encode[53] = {'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x',
		'y', 'z', 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm',
		'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z', 'A', 'B',
		'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M'};

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
