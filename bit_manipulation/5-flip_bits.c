#include <stdio.h>
#include "main.h"

/**
 * flip_bits - finds the number of bits between two numbers
 * @n: number a
 * @m: number b
 *
 * Return: numbers of bits to switch
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, count;
	unsigned long int shift;
	unsigned long int not = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		shift = not >> i;
		if (shift & 1)
			count++;
	}
	return (count);
}
