#include <stdio.h>
#include "main.h"

/**
 * more_numbers - Main body
 * Description: Prints 1-14 ten times
 * Return: void
 */

void more_numbers(void)
{
	int ten = 0;
	int i;

	while (ten <= 9)
	{
		for (i = 0; i <= 14; i++)
		{
			_putchar(i);
		}
		i = 0;
		_putchar('\n');
		ten++;
	}
}
