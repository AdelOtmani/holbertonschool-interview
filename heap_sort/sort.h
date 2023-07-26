#ifndef SORT_H
#define SORT_H

#include <stdio.h>
#include <stdlib.h>

void heap_sort(int *array, size_t size);
void print_array(const int *array, size_t size);
void heap(int *array, int n, size_t size, int i);
void swap(int *a, int *b);

#endif
