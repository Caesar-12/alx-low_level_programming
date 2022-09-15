#include <stdio.h>
#include "main.h"

/**
 * print_diagonal - Main body
 * Description: Piths diagonals
 * @n: Int representing diagonal lenght
 * Return: void
 */

void print_diagonal(int n)
{
	int num;
	int numb = n;
	int space;

	for (num = 0; num < n; num++)
	{
		for (space = 0; space <= num; space++)
		{
			if (numb > 0)
			{
				_putchar(' ');
			}
		}
		if (numb > 0)
		{
			_putchar('\\');
			_putchar('\n');
		}
		else
			_putchar('\n');
	}
}
