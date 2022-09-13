#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <time.h>

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
 * Description: Leraning C funtions
 */

int main(void)
{
	char value[] = "_putchar";
	int i = 0;

	while (value[i] != '\0')
	{
		_putchar(value[i]);
		i++;
	}
	putchar('\n');

	return (0);
}
