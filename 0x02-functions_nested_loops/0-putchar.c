#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <main.h>

/**
 * _putchar - Entry point
 * Return: on success 1
 * @c: value to print
 * Description: Write Function
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * main - Entry point
 * Return: Always 0 (Success)
 * Description: C funtions
 */
int main(void)
{
	int size;

	size = _putchar('s');

	putchar(size);
	putchar('\n');

	return (0);
}
