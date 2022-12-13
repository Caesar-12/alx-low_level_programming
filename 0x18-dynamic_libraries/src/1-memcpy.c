#include <stdio.h>
#include "main.h"

/**
 * *_memcpy - copies memory address
 * @dest: Memory area to copy to
 * @src: Memory area source to copy from
 * @n: Number of bytes
 * Return: Pointe
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i;

	i = 0;

	while (n > 0)
	{
		dest[i] = src[i];
		i++;
		n--;
	}
	return (dest);
}
