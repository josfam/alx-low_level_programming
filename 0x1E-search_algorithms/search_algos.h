#ifndef SEARCH_ALGOS_HEADER
#define SEARCH_ALGOS_HEADER

#include <stddef.h>

/* Searches for a value in an array of integers using the Linear search */
/* algorithm */
int linear_search(int *array, size_t size, int value);

/* Searches for a value in a sorted array of integers using the */
/* Binary search algorithm */
int binary_search(int *array, size_t size, int value);

/* Prints the values of the array that will be searched */
void print_search_space(int *array, int start, int end);

#endif
