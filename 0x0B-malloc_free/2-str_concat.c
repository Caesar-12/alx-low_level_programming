#include "main.h"
#include <stdlib.h>

/**
 * str_concat - Concatenates stringsand store to a new memory space
 * @s1: String to concatenate to
 * @s2: String to concatenate with
 * Return: A pointer to new memory space storing concatenated str
 */

char *str_concat(char *s1, char *s2)
{
	int i, size = 0;
	int len1 = 0;
	int len2 = 0;
	char *ch;

	while (s1[len1] != '\0')
	{
		len1++;
	}
	while (s2[len2] != '\0')
	{
		len2++;
	}

	size = (len1 + len2 + 1);

	ch = (char *) malloc(sizeof(char) * size);

	if (ch == NULL)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i <= len1; i++)
		{
			ch[i] = s1[i];
		}
		i = 0;
		for (i = 0; i <= len2; i++)
		{
			ch[i] = s2[i];
		}
		ch[size] = '\0';
	}

	return (ch);
}
