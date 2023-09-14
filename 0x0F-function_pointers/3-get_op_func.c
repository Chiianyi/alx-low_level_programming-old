#include "3-calc.h"
#include <string.h>
#include <stdlib.h>
/**
 * get_op_func - select the correct ops function asked by user
 * @s: operator argument
 * Return: function pointer corresponding to operator given
 */
int (*get_op_func(char *s))(int, int)
{
op_t ops[] = {
	{"+", op_add },
	{"-", op_sub },
	{"*", op_mul },
	{"/", op_div },
	{"%", op_mod },
	{NULL, NULL }
};
int i;

i = 0;
while (i < 5)
{
	if (strcmp(s, ops[i].op) == 0)
		return (ops[i].f);

	i++;
}

return (0);
}