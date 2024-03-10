#include <stdio.h>
#include "main.h"

/**
 * get_bit - return bit at given index
 * @n: number
 * @index: bit to print
 *
 * Return: value of bit at index, -1 on error
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int bit;

	if (index > 63)
		return (-1);
	bit = (n >> index) & 1;
	return (bit);
}
