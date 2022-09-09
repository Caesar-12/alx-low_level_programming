#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * Description: Printing alphabets using putchar function
 * Return: Always 0 (Success)
 */

int main(void)
{
	char alpha[] = "0123456789abcdef";
	int l = 0;

	while (alpha[l] != '\0' && alpha[l] != '\n')
	{
		putchar(alpha[l]);
		l++;
	}
	putchar('\n');
	return (0);
}
