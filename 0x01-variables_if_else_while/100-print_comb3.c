#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * Description: Combos
 * Return: Always 0 (Succes)
 */

int main(void)
{
	int u;
	int t;

	for (t = '0'; t <= '9'; t++)
	{
		for (u = (t + 1); u <= '9'; u++)
		{
			putchar(t);
			putchar(u);

			if (t != '8' || u != '9')
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
