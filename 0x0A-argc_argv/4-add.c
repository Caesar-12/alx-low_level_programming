#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints a program name
 * @argv: Argument
 * @argc: Argument count
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i, len, sum = 0;
	int a;
	int num;

	for (i = 1; i < argc; i++)
	{
		for (len = 0; argv[i][len] != '\0'; len++)
		{
			if (argv[i][len] < '0' || argv[i][len] > '9')
			{
				printf("%s\n", "Error");
				return (1);
			}
		}
	}

	for (a = 1; a < argc; a++)
	{
		num = atoi(argv[a]);
		sum += num;
	}
	printf("%d\n", sum);
	return (0);
}
