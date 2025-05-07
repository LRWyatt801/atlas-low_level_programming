#include <stdio.h>
#include <stdlib.h>

#define MIN(a, b) ((a) < (b) ? (a) : (b))

static int binary_search(int *array, int left, int right, int value);


/**
* exponential_search - searches an array using the exponential algorithm
* @array: array to be search for
* @size: size of array
* @value: value to search for
*
* Return: index of the found value, or -1 on failure
*/

int exponential_search(int *array, size_t size, int value)
{
	size_t bound = 1;

	if (!array || size <= 0)
		return (-1);

	while (bound < size && array[bound] <= value)
	{
		printf("Value checked array[%lu] = [%d]\n",
			bound, array[bound]);
		bound *= 2;
	}
	printf("Value found between indexes [%lu] and [%lu]\n",
		bound / 2, MIN(bound, size - 1));

	return (binary_search(array, (int)bound / 2,
			      (int)MIN(bound, size - 1), value));
}

/**
* binary_search - searches a bounded array for a valued
* @array: array to search
* @left: left limit
* @right: right limit
* @value: value to search for
*
* Return: index of value, or -1 on failure
*/

static int binary_search(int *array, int left, int right, int value)
{
	int i;
	int mid = left + (right - left) / 2;

	if (left > right)
		return (-1);

	printf("Searching in array: ");
	for (i = left; i <= right; i++)
	{
		if (i < right)
			printf("%d, ", array[i]);
		else
			printf("%d\n", array[i]);
	}

	if (array[mid] == value)
		return (mid);
	else if (value < array[mid])
		return (binary_search(array, left, mid - 1, value));
	else
		return (binary_search(array, mid + 1, right, value));
}
