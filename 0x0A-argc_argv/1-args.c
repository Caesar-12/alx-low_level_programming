#include <stdio.h>

/**
 * main - Prints a program name
 * @argv: Argument
 * @argc: Argument count
 * Return: 0
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);

	return (0);
}
