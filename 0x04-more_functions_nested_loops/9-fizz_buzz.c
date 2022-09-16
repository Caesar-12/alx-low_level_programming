#include <stdlib.h>
#include <stdio.h>

/**
 * main - Main body
 * Description: prints int 1-100 and replaces multiples of 3 and 5
 * Return: 0 if successful
 */

int main(void)
{
	int num;

	for (num = 1; num <= 100; num++)
	{
		if (num % 3 == 0)
		{
			printf("Fizz");
		}
		else if (num % 5 == 0)
		{
			printf("Buzz");
		}
		else if (num % 3 == 0 && num % 5 == 0)
		{
			printf("FizzBuzz");
		}
		else
		{
			printf("%d", num);
		}

		if (num < 100)
			printf(" ");
	}
	printf("\n");

	return (0);
}
