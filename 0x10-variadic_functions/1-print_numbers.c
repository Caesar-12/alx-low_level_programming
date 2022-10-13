#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
#include <stdlib.h>

/**
 * print_numbers - Prints numbers
 *
 * @separator: Numbers separator
 * @n: number of paratemers
 *
 * Retrun: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	int i, num;
	va_list args;

	if (separator == NULL || n <= 0)
		exit(98);

	va_start(args, n);

	for (i = 0; i < (int)n; i++)
	{
		num = va_arg(args, int);
		printf("%d", num);
		if (i < (int)n - 1)
			printf("%c ", *separator);
	}
	va_end(args);
	printf("\n");
}
