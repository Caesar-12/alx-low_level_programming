#include <stdio.h>
#include "main.h"

/**
 * more_numbers - Main body
 * Description: Prints 1-14 ten times
 * Return: void
 */

void more_numbers(void)
{
	int ten;
	int i;

	for (ten = 0; ten <= 9; ten++)
	{
		for (i = 0; i <= 14; i++)
		{
			if ((i / 10) > 0)
			{
				_putchar('0' + (i / 10));
			}
			_putchar('0' + (i % 10));
		}
		_putchar('\n');
	}
}
