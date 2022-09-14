#include <stdio.h>
#include <stdlib.h>
#include <main.h>

/**
 * _islower - Main function body
 * Description: Checks for lowercase letters
 * @c: character to be received and checked
 * Return: 1 forlowercase and 0 for other
 */

int _islower(int c)
{
	int letter = c;

	if (letter > 'a' && letter < 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
