#include "sort.h"


/**
 * merge_function - merge sorted array
 * @array: input array
 * @output: array
 * @left: leftpoint index array
 * @mid: midpoint array
 * @right: right endpoint array
 */
void merge_function(int *array, int *output, size_t left, size_t mid, size_t right)
{
	size_t i, j, m, n = right - left;

	i = left;
	j = mid;
	printf("Merging...\n");
	printf("[left]: ");
	print_array((const int *) array + left, mid - left);
	printf("[right]: ");
	print_array((const int *) array + mid, right - mid);
	for (m = 0; m < n; m++)
	{
		if (i < mid && (j >= right || array[i] <= array[j]))
		{
			output[m + left] = array[i];
			i++;
		}
		else
		{
			output[m + left] = array[j];
			j++;
		}
	}
	printf("[Done]: ");
	print_array((const int *) output + left, n);
}

/**
 * merge_split - split and merge
 * @output: array
 * @array: array
 * @left: left index of array
 * @right: right index of array
 */
void merge_split(int *output, int *array, size_t left, size_t right)
{
	size_t mid;

	if (right - left <= 1)
		return;
	mid = (right + left) / 2;
	merge_split(array, output, left, mid);
	merge_split(array, output, mid, right);
	merge_function(output, array, left, mid, right);
}

/**
 * copy - copy array
 * @array: input array
 * @output: array to copy from
 * @size: array
 */
void copy(int *array, int *output, size_t size)
{
	size_t i;

	for (i = 0; i < size; i++)
		array[i] = output[i];
}

/**
 * merge_sort - merge sort algorithm
 * @array: array
 * @size: array
 */
void merge_sort(int *array, size_t size)
{
	int *output;

	if (array == NULL || size <= 1)
		return;
	output = malloc(sizeof(array[0]) * size);
	if (!output)
		return;
	copy(output, array, size);
	merge_split(output, array, 0, size);
	free(output);
}
