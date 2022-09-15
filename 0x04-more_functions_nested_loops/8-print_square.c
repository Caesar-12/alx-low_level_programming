#include <stdio.h>
#include "main.h"

/**
 * print_square - Main body
 * Description: Prints a square of given int size
 * @size: Length of square
 * Return: void
 */

void print_square(int size)
{
	int len;
	int wid;

	if (size > 0)
	{
		for (len = 1; len <= size; len++)
		{
			for (wid = 1; wid <= size; wid++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
