#include <stdio.h>
#include "main.h"

/**
 * set_string - Sets pointer to char
 * @s: Double pointer
 * @to: Pointer of type char
 * Return: void
 */

void set_string(char **s, char *to)
{
	*s = to;
}
