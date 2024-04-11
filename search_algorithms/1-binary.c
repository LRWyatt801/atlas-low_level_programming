#include "search_algos.h"

/**
 * binary_search - searchs for an element in an array
 * @array: pointer to the first element in an array
 * @size: size of array
 * @value: value to search for
 *
 * Return: index of value, -1 on failure
*/

int binary_search(int *array, size_t size, int value)
{
	int arrsize = size - 1;
	int index;

	if (!array)
		return (-1);
	index = binarylimits(array, 0, arrsize, value);
	return (index);
}

/**
 * binarylimits - binary search with left and right limits
 * @array: pointer to first element in an array
 * @l: left index
 * @r: right index
 * @value: value to search for
 * 
 * Return: index of value, -1 if does not exist
*/

int binarylimits(int *array, int l, int r, int value)
{
	return (0);
}