#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>

/**
 * print_strings - Prints strings
 *
 * @separator: Numbers separator
 * @n: number of paratemers
 *
 * Retrun: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	int i;
	char *c;
	va_list args;

	va_start(args, n);

	if (separator == NULL)
		return;
	for (i = 0; i < (int)n; i++)
	{
		c = va_arg(args, char *);
		if (c == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", c);
			if (i < (int)n - 1)
				printf("%c ", *separator);
		}
	}
	va_end(args);
	printf("\n");
}
