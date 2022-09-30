#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints a program name
 * @argv: Argument
 * @argc: Argument count
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int num1, num2, product;

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);

	product = num1 * num2;

	if (argc != 3)
	{
		printf("%s\n", "Error");
		return (1);
	}

	printf("%d\n", product);

	return (0);
}
