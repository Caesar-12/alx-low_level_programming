#include "main.h"
#include <stdlib.h>

/**
 * create_array - Allocates a set amount of memory using malloc
 * @size: Memory size to allocate
 * @c: Character to write to each byte
 * Return: Array of chars
 */

char *create_array(unsigned int size, char c)
{
	int i;
	char *ch = (char *) malloc(size);

	if (size == 0)
	{
		return (NULL);
	}
	else if (ch == NULL)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < (int)size; i++)
		{
			ch[i] = c;
		}
	}
	ch[i] = '\0';
	return (ch);
}
