#include <stdio.h>
#include "main.h"

/**
 * *_strncat - Func body
 * Description: Concatenates n number of char to string
 * @dest: string to be cancatinated to
 * @str: string to concatenate with
 * @n: number of char to concatenate
 * Return: Concatenated string
 */

char *_strcat(char *dest, char *str, int n)
{
	int i = 0;
	int len = 0;

	while (dest[len] != '\0')
	{
		len++;
	}

	while (str[i] != '\0' && i < n)
	{
		dest[len] = str[i];
		len++;
		i++;
	}

	dest[len] = '\0';
	return (dest);
}
