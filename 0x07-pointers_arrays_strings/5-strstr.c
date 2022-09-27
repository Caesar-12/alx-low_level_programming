#include <stdio.h>
#include "main.h"

/**
 * *_strstr - Locates the first occurence of a string(word)
 * @haystack: main string
 * @needle: String to search
 * Return: Pointer to the substring
 */

char *_strstr(char *haystack, char *needle)
{
	int l = 0, j, x;

	if (needle[0] == '\0')
                return (haystack);

	while (haystack[i] != '\0')
	{
		if (haystack[i] == needle[0])
		{
			x = i, j = 0;
			while (needle[j] != '\0')
			{
				if (haystack[x] == needle[j])
					x++, j++;
				else
					break;
			} 
			if (needle[j] == '\0')
			{
				return (haystack + i);
			}
		}
		i++;
	}
	return ('\0');
}
