#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * op_add - addition function
 * @a: first int input
 * @b: second int input
 * Return: sum of x and y
 */
int op_add(int a, int b)
{
return (a + b);
}

/**
 * op_sub - subtraction function
 * @a: first int
 * @b: second int
 * Return: the difference of two integers
 */
int op_sub(int a, int b)
{
return (a - b);
}

/**
 * op_mul - calculates the products of two numbers
 * @a: first number
 * @b: second number
 * Return: product of two numbers
 */
int op_mul(int a, int b)
{
return (a * b);
}

/**
 * op_div - divides two numbers
 * @a: first num
 * @b: second num
 * Return: returns division of two nums
 */
int op_div(int a, int b)
{
if (b == 0)
{
	printf("Error\n");
	exit(100);
}

return (a / b);
}


/**
 * op_mod - ...
 * @a: ...
 * @b: ...
 *
 * Return: ...
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a % b);
}
