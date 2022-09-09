#include <stdio.h>

/*
 * main - Entry point
 *
 * Description: using the main function
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int one_bytes = 1;
	int four_bytes = 4;
	int eight_bytes = 8;

	printf("Size of a char: %d byte(s);", one_bytes);
	printf("Size of a int: %d byte(s);", four_bytes);
	printf("Size of a long int: %d byte(s);", four_bytes);
	printf("Size of a long long int: %d byte(s);", eight_bytes);
	printf("Size of a float: %d byte(s);", four_bytes);
}
