#include "main.h"

/**
 * get_bit - returns the value of a bit at an index in decimals
 * @n: number to search for
 * @index: index of the bit
 *
 * Return: value of the bit to be returned
*/
int get_bit(unsigned long int n, unsigned int index)
{
	int bit_val;

	if (index > 63)
		return (-1);
	bit_val = (n >> index) & 1;
	return (bit_val);
}
