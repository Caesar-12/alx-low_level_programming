#include <stdio.h>
#include "main.h"

/**
 * *_strcpy - Func body
 * Description: Copies from one var to another
 * @dest: Destination to copy to
 * @src: Source
 * Return: void
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;
	int l = 0;

	while (src[i] != '\0')
	{
		i++;
	}

	for ( ; l < i; l++)
	{
		dest[l] = src[l];
	}

	dest[i] = '\0';
	return (dest);
}
