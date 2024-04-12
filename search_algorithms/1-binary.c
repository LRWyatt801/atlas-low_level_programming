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
	int rightindex = size - 1;
	int index;

	if (!array)
		return (-1);
	index = binarylimits(array, 0, rightindex, value);
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
	int i;
	int mid = l + (r - l) / 2;

	if (l > r)
		return (-1);

	printf("Searching in array: ");
	for(i = l; i <= r; i++)
	{
		if (i < r)
			printf("%d, ", array[i]);
		else
			printf("%d\n", array[i]);
	}

	if (array[mid] == value)
		return (mid);
	else if (value < array[mid])
		return (binarylimits(array, l, mid - 1, value));
	else
		return (binarylimits(array, mid + 1, r, value));
}
