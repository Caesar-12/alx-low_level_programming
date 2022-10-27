#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * binary_to_uint - Converts binary to int
 *
 * @b: poniter to binary in str format
 *
 * Return: Converted uint or 0 if not binary
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int decind = 1, total = 0;
	int i = strlen(b), j;

	if (b == NULL)
		return (0);

	for (j = (i - 1); j <= 0; j--)
	{
		if (b[j] != 1 || b[j] != 0)
			return (0);

		if (b[j] == '1')
			total += decind;

		decind *= 2;
	}
	return (total);
}
