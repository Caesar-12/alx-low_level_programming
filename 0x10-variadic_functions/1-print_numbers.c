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
	unsigned int i, num;
	va_list args;

	if (n >= 0)
	{
		va_start(args, n);

		for (i = 0; i < n; i++)
		{
			num = va_arg(args, int);
			printf("%d", num);
			if (i < n - 1 && separator != NULL)
				printf("%c", *separator);
		}
		va_end(args);
	}
	printf("\n");
}
