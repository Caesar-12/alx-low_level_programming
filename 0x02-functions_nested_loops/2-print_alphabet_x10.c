#include <stdio.h>
#include <time.h>
#include <unistd.h>
#include <stdlib.h>

/**
 * print_alphabet_x10 - Main body
 * Description: Printing alphabet
 */

void print_alphabet_x10(void)
{
	int i = 0;
	int num = 10;
	char alpha[] = "abcdefghijklmnopqrstuvwxyz";

	while (num != 10)
	{
		if (alpha[i] != '\0')
		{
			putchar(alpha[i]);
			i++;
		}
		else if (alpha[i] == '\0')
		{
			putchar('\n');
			num++;
		}
	}
	putchar('\n');
}
