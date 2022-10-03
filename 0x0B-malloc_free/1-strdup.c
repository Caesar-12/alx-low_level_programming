#include "main.h"
#include <stdlib.h>

/**
 * _strdup - Returns a pointer to newly allocated space
 * @str: String to duplicate and return pointer t0
 * Return: Pointer to allocated memory
 */

char *_strdup(char *str)
{
	int i;
	int len = 0;

	while (str[len] != '\0')
	{
		len++;
	}

	char *ch = (char *) malloc(sizeof(char) * len);

	if (str == NULL)
	{
		return (NULL);
	}
	else if (ch == NULL)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < len; i++)
		{
			ch[i] = str[i];
		}
	}

	return (ch);
}
