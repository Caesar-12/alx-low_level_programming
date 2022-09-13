#include <stdio.h>
#include <time.h>
#include <unistd.h>
#include <stdlib.h>

/**
 * main - Main body
 * Description: Printing alphabets
 * Return: 0 if successfull
 */

int main(void)
{
	int i = 0;
	char alpha[] = "abcdefghijklmnopqrstuvwxyz";

	while (alpha[i] != '\0')
	{
		putchar(alpha[i]);
		i++;
	}
	putchar('\n');
	return (0);
}
