#include <stdio.h>
#include <stdlib.h>

/**
 *main - Entry point
 *Description: Using the if conditional statement with the random func
 *Return: Always 0 (Success)
 */

int main(void)
{
	int n = rand();

	if (n > 0)
	{
		printf("%d is positive\n", n);
	} else if (n  < 0)
	{
		printf("%d is negative\n", n);
	} else
	{
		printf("%d is zero\n", n);
	}

	return (0);
}
