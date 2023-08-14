#include <stdio.h>
/**
 * main - Entry point
 * Description: uses outchar to print   alphabet omitting q and e
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n = 97;

	while (n <= 122)
	{
		if (n == 101 || n == 113)
		{
			n++;
			continue;
		}
				putchar(n);
				n++;
				}
	putchar('\n');
	return (0);
}

