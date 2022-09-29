#include <stdio.h>
#include "main.h"

/**
 * check_prime - Checks if int is a prime number
 * @n: Number to check if prime number
 * @factor: Divisors to check n
 * Return: 1 if prime number, 0 if otherwise
 */

int check_prime(int n, int factor)
{
	if ((n / factor) == 1 || (n / factor) == -1)
	{
		return (0);
	}
	else if ((n % factor) == 0)
	{
		return (1);
	}

	return (check_prime(n, factor + 1));
}
/**
 * is_prime_number - Checks for a prime number
 * @n: Number to check
 * Return: 1 if prime number 0 if otherwise
 */

int is_prime_number(int n)
{
	if ((n % 2) == 0 || n < 2)
	{
		return (0);
	}
	else if (n == 2)
	{
		return (1);
	}
	else
	{
		return (check_prime(n, 3));
	}
}
