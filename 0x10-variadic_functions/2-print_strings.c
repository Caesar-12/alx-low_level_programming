#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

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
	unsigned int i;
	char *c;
	va_list args;

	if (n > 0)
	{
		va_start(args, n);
		for (i = 0; i < n; i++)
		{
			c = va_arg(args, char *);
			if (c == NULL)
			{
				printf("(nil)");
			}
			else
			{
				printf("%s", c);
				if (i < n - 1 && separator != NULL)
					printf("%c ", *separator);
			}
		}
		va_end(args);
	}
	printf("\n");
}
