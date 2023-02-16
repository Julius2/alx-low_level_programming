#include <stdio.h>
/**
 * main - Size is not grandeur, and territory does not make a nation
 * Return: Always 0 (Success)
 */
int main(void)
{
	printf("Size of char: %d byte(s)\n", sizeof(char));
	printf("Size of int: %d byte(s)\n", sizeof(int));
	printf("Size of long: %d byte(s)\n", sizeof(long int));
	printf("Size of long long int: % byte(s)\n", sizeof(long long int));
	printf("Size of float: %lu byte(s)\n", sizeof(float));
	return (0);
}
