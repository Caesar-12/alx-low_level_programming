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
	char *ch = (char *) malloc(sizeof(str));

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
		for (i = 0; str[i] != '\0'; i++)
		{
			ch[i] = str[i];
		}
	}
	ch[i] = '\0';
	return (ch);
}
