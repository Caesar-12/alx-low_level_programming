#include <stdio.h>
#include "3-calc.h"

/**
 * op_add - Adds int
 *
 * @a: first int
 * @b: second int
 *
 * Return: Returns sum
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - Gets difference
 *
 * @a: first int
 * @b: second int
 *
 * Return: Returns difference
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - Multiplies int
 *
 * @a: first int
 * @b: second int
 *
 * Return: Returns product
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - Gets quotient
 *
 * @a: first int
 * @b: second int
 *
 * Return: Returns quotient
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - Gets remainder
 *
 * @a: first int
 * @b: second int
 *
 * Return: Returns sum
 */

int op_mod(int a, int b)
{
	return (a % b);
}
