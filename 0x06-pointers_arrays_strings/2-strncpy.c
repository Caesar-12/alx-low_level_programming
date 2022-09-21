#include <stdio.h>
#include "main.h"

/**
 * *_strncpy - Func body
 * Description: Copies a string into another
 * @dest: Empty string to copy into
 * @src: String to copy from
 * @n: Number of characters to copy
 * Return: Returns copied string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int  len = 0;

	while (src[len] != '\0' && len < n)
	{
		dest[len] = src[len];
		len++;
	}

	dest[len] = '\0';
	return (dest);
}
