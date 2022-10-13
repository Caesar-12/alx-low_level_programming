#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * sum_them_all - sum up all parameters
 *
 * @n: number of parameters
 *
 * Return: Sum of parameters
 */

int sum_them_all(const unsigned int n, ...)
{
	int i, para, sum = 0;
	va_list args;

	if (n == 0)
		return (0);

	va_start(args, n);

	for (i = 0; i < (int)n; i++)
	{
		para = va_arg(args, int);
		sum += para;
	}
	va_end(args);
	return (sum);
}
