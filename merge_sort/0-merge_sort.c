#include "sort.h"


/**
 * merge_function - merge sorted array
 * @array: input pointer array
 * @z: output pointer array
 * @left: leftpoint index array
 * @mid: midpoint array
 * @right: right endpoint array
 */
void merge_function(int *array, int *z, size_t left, size_t mid, size_t right)
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
			z[m + left] = array[i];
			i++;
		}
		else
		{
			z[m + left] = array[j];
			j++;
		}
	}
	printf("[Done]: ");
	print_array((const int *) z + left, n);
}

/**
 * merge_split - split and merge
 * @z: output pointer array
 * @array: pointer array
 * @left: left index of array
 * @right: right index of array
 */
void merge_split(int *z, int *array, size_t left, size_t right)
{
	size_t mid;

	if (right - left <= 1)
		return;
	mid = (right + left) / 2;
	merge_split(array, z, left, mid);
	merge_split(array, z, mid, right);
	merge_function(z, array, left, mid, right);
}

/**
 * copy - copy array
 * @array: input pointer array
 * @z: output pointer array
 * @size: array
 */
void copy(int *array, int *z, size_t size)
{
	size_t i;

	for (i = 0; i < size; i++)
		array[i] = z[i];
}

/**
 * merge_sort - merge sort algorithm
 * @array: pointer array
 * @size: array
 */
void merge_sort(int *array, size_t size)
{
	int *z;

	if (array == NULL || size <= 1)
		return;
	z = malloc(sizeof(array[0]) * size);
	if (!z)
		return;
	copy(z, array, size);
	merge_split(z, array, 0, size);
	free(z);
}
