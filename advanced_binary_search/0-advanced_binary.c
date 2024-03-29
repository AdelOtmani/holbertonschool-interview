#include "search_algos.h"

/**
 * advanced_binary - search an array of integers
 * @array: pointer to the first element of the array to search in
 * @size: number element in array
 * @value: is value for search
 * Return: return the first index or -1 if is none
 */
int advanced_binary(int *array, size_t size, int value)
{
	size_t h = size - 1, l = 0;
	int p;

	if (array == NULL)
		return (-1);
	p = (index_array(array, size, value, l, h));
	return (p);
}

/**
 * index_array - search an array of integers
 * @array: pointer to the first element of the array to search in
 * @size: number element in array
 * @value: is value for search
 * @l: low array
 * @h: high array
 * Return: return the first index or -1 if is none
 * if array is NULL return -1
 */
int index_array(int *array, size_t size, int value, int l, int h)
{
	int i = 0, m = 0;

	if (l > h)
		return (-1);

	m = l + ((h - l) / 2);
	printf("Searching in array: ");
	for (i = l; i <= h; i++)
	{
		if (i < h)
			printf("%d, ", array[i]);

		else
			printf("%d\n", array[i]);
	}
	if (array[m] < value)
		l = m + 1;
	else if (array[m] > value)
		h = m;
	else if (array[m] == value && array[m - 1] == value)
		h = m;
	else
		return (m);
	return (index_array(array, size, value, l, h));


}
