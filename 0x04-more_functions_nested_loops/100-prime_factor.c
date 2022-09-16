#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * Description: Gets the largest prime factor
 * Return: void
 */

int main(void)
{
	long i;
	long num = 612852475143;

	for (i = 2; i <= num; i++)
	{
		if (num % i == 0)
		{
			num = num / i;
			i--;
		}
	}
	printf("%lu\n", i);
	return (0);
}
