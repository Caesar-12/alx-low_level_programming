#include <stdio.h>

/**
 * main - Prints a program name
 * @argv: Argument
 * @argc: Argument count
 * Return: 0
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);

	return (0);
}
