#include <stdio.h>
#include "main.h"

/**
 * print_chessboard - Prints chess board
 * @a: Array to print from
 * Return: void
 */

void print_chessboard(char (*a)[8])
{
	int down;
	int across;

	for (across = 0; across < 8; across++)
	{
		for (down = 0; down < 8; down++)
		{
			_putchar(a[across][down]);
		}
		_putchar('\n');
	}
}
