#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * Description: Printing alphabets using putchar function
 * Return: Always 0 (Success)
 */

int main(void)
{
	int l = 0;

	for (; l <= 10 ; l++)
	{
		putchar(l);
	}
	putchar('\n');
	return (0);
}
