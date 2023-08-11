#include <stdio.h>
/**
 *  * main - entry point
 *   *render variable sizes, printf
 *    * Return: Always 0 (success)
 *     */
int main(void)
{
        printf("size of char : %c\n", sizeof(char));
        printf("size of int : %d\n", sizeof(int));
        printf("size of long int : %ld\n", sizeof(long int));
        printf("size of long long int : %lld\n", sizeof(long long int));
        printf("size of float : %f\n", sizeof(float));
	return (0);
}
