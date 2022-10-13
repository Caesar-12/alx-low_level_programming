#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

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

	va_start(args, n);

	if (separator == NULL)
		return;
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
