#include <stdio.h>
#include "main.h"

/**
 * *_strcat - Func body
 * Description: Concatenates strings
 * @dest: string to be cancatinated to
 * @str: string to concatenate with
 * Return: Concatenated string
 */

char *_strcat(char *dest, char *str)
{
	int i = 0;
	int len = 0;

	while (dest[len] != '\0')
	{
		len++;
	}

	while (str[i] != '\0')
	{
		dest[len] = str[i];
		len++;
		i++;
	}

	dest[len] = '\0';
	return (dest);
}
