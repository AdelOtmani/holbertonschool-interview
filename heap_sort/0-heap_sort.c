#include "sort.h"

/**
* swap - Function that swaps two integers
* @a: first integer
* @b: second integer
*/

void swap(int *a, int *b)
{
	int empty;

	empty = *a;
	*a = *b;
	*b = empty;
}


/**
* heap - Heap a subtree
* @array: array
* @n: size
* @size: size_t
* @i: index
* Return: void
*/

void heap(int *array, int n, size_t size, int i)
{
	int largest = i;
	int l = 2 * i + 1;
	int r = 2 * i + 2;

	if (l < n && array[l] > array[largest])
		largest = l;

	if (r < n && array[r] > array[largest])
		largest = r;

	if (largest != i)
	{
		swap(&array[i], &array[largest]);
		print_array(array, size);
		heap(array, n, size, largest);
	}
}

/**
* heap_sort - heap sort
* @array: array
* @size: size
*/

void heap_sort(int *array, size_t size)
{
	int i;

	if (array)
	{
		for (i = size / 2 - 1; i >= 0; i--)
			heap(array, size, size, i);

		for (i = size - 1; i > 0; i--)
		{
			swap(&array[0], &array[i]);
			print_array(array, size);
			heap(array, i, size, 0);
		}
		swap(&array[0], &array[i]);
		heap(array, i, size, 0);
	}
}
