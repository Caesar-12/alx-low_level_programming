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
	int u1;
	int t1;

	for (t = '0'; t <= '9'; t++)
	{
		for (t = '0'; u <= '9'; u++)
		{
			for (t1 = t; t1 <= '9'; t1++)
			{
				for (u1 = (u + 1); u1 <= '9'; u1++)
				{
					putchar(t);
					putchar(u);
					putchar(' ');
					putchar(t1);
					putchar(u1);

					if (!((t == '9' && u == '8') && (t1 == '9' && u1 == '9')))
					{
						putchar(',');
						putchar(' ');
					}
				}
				u1 = '0';
			}
		}
	}
	putchar('\n');
	return (0);
}
