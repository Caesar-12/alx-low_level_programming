#include <stdio.h>
#include "3-calc.h"
#include <stdlib.h>

/**
 * main - Main body func
 *
 * @argc: arguments count
 * @argv: arguments
 *
 * Return: 0 for success
 */

int main(int argc, char *argv[])
{
	int num1, num2, result;
	int (*f)(int a, int b);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	f = get_op_func(argv[2]);

	if (f == NULL || argv[2][1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}
	if ((argv[2][0] == '/' || argv[2][0] == '%') && (argv[3][0] == '0'))
	{
		printf("Error\n");
                exit(100);
	}

	result = (*f)(num1, num2);
	printf("%d\n", result);

	return (0);
}
