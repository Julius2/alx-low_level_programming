#include "main.h"

/**
 * print_last_digit - Prints the last digit of any number
 * @n: the number to be worked on
 *Return: the value of the last digit of the  number
 */

int print_last_digit(int n)
{
	int last;

	last = n % 10;
	if (last < 0)
	{
	last = last * -1;
	}
	_putchar(last + '0');
	return (last);
}
