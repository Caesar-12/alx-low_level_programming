#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * Description: Printing alphabets using putchar function
 * Return: Always 0 (Success)
 */

int main(void)
{
	char a[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int l = 0;

	while (a[l] != '\0' && a[l] != '\n')
	{
		putchar(a[l]);
		l++;
	}
	putchar('\n');
	return (0);
}
