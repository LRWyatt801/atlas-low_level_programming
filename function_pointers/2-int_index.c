#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: list of integers to search through
 * @size: size of list
 * @cmp: pointer to function that compares values
 *
 * Return: return first element for which cmp does not return 0
 * 	   if no element matches return -1
 * 	   if size == 0 return -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0, test = 0;

	if (size == 0)
		return (-1);

	while (test == 0 && i < size)
	{
		test = (*cmp)(*array++);
		i++;
	}
	
	if (test != 0)
		return (i - 1);
	else
		return (-1);
}

