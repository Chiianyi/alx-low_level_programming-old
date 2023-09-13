#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the opcodes of its own main function
 * @argc: number of arguments passed to the function
 * @argv: array of pointers to arguments
 *
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	int bites, index;
	int (*address)(int, char **) = main;
	unsigned char opcode;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	bites = atoi(argv[1]);
	if (bites < 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (index = 0; index < bites; index++)
	{
		opcode = *(unsigned char *)address;
		printf("%.2x", opcode);

		if (index == bites - 1)
			continue;
		printf(" ");

		address++;
	}

	printf("\n");

	return (0);
}
