#include <stdio.h>
/**
 * main - Write a C program that prints the size of various types on the computer it is compiled and run on
 * Return: 0 (Success)
 */
int main(void)
{
printf("The size of char is %lu bytes\n", sizeof(char));
printf("The size of int is %lu bytes\n", sizeof(int));
printf("The size of long is %lu bytes\n", sizeof(long int));
printf("The size of long long is %lu bytes\n", sizeof(long long int));
printf("The size of float is %lu bytes\n", sizeof(float));
}



