#include <stdio.h>
#include <stdlib.h>

/**
 * _isalpha - Main programme body
 * Description: Checks for alphabetic characters
 * @c: letter to be received and checked
 * Return: 1 if alphabet, 0 if otherwise
 */

int _isalpha(int c)
{
	int letter = c;

	if (letter > 'a' && letter < 'z' && letter > 'A' && letter < 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
