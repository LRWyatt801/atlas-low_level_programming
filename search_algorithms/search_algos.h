#ifndef _SEARCH_ALGOS_
#define _SEARCH_ALGOS_

/*libaries*/

#include <stdio.h>
#include <stdlib.h>

/*prototypes*/

int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);

int binarylimits(int *array, int l, int r, int value);

/****************************** ADVANCED SEARCH ALGORITHMS *******************/
int interpolation_search(int *array, size_t size, int value);
int exponential_search(int *array, size_t size, int value);

#endif
