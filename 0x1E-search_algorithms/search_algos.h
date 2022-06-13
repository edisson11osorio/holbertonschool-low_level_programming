#ifndef SEARCHING_H
#define SEARCHING_H

#include <stdio.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <math.h>

/* Function that searches for a value in an array using Linear algorithm */
int linear_search(int *array, size_t size, int value);

/* Function that searches for a value in an array using Binary algorithm */
int binary_search(int *array, size_t size, int value);

/* Function that splits recursively an array */
int recursive_split(int *array, int leftIndex, int rightIndex, int value);

/* Function that prints an array */
void print_array(int *array, int start, int end);

/* function that searches for a value in an array using Jump algorithm */
int jump_search(int *array, size_t size, int value);

/* function that searches for a value in an given part of an array */
int findIndex(int *array, int leftIndex, int rightIndex, int value);

/* function that searches a value in an array using Interpolation algorithm */
int interpolation_search(int *array, size_t size, int value);

/*  */


#endif /* SEARCHING_H */
