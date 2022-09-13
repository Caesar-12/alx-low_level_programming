#include <stdio.h>
#include <time.h>
#include <unistd.h>
#include <stdlib.h>

/**
 * print_alphabet - Main body
 * Description: Printing alphabet
 */

void print_alphabet(void)
{
	int i = 0;
	char alpha[] = "abcdefghijklmnopqrstuvwxyz";

	while (alpha[i] != '\0')
	{
		putchar(alpha[i]);
		i++;
	}
	putchar('\n');
}
