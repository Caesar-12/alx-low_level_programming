#include <stdio.h>

/*
 * main - Entry point
 * Return: Always 0 (Success)
 * Description -Size is not grandeur, and teritory does not make a nation
 */

int main(void)
{
	int one_bytes = 1;
	int four_bytes = 4;
	int eight_bytes = 8;

	printf("Size of a char: %d byte(s)\n", one_bytes);
	printf("Size of a int: %d byte(s)\n", four_bytes);
	printf("Size of a long int: %d byte(s)\n", four_bytes);
	printf("Size of a long long int: %d byte(s)\n", eight_bytes);
	printf("Size of a float: %d byte(s)\n", four_bytes);
	return (0);
}
