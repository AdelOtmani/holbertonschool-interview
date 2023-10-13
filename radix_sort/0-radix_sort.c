#include "sort.h"

/**
 * radix_sort - sorts array Radix sort algorithm
 * @array: array to sort
 * @size: array's size
 * Return: Nothing.
 */
void radix_sort(int *array, size_t size)
{
	size_t i, j;
	int *narray = NULL, a, b, count = 1, num = 0, c = 0;

	if (!array || !size)
		return;
	for (j = 0; j < size; j++)
	{
		if (num < array[j])
			num = array[j];	}
	while (num / 10 > 0)
	{ num = num / 10;
		count++; }
	narray = calloc(size, sizeof(int));
	for (b = 0; b < count; b++)
	{ c = 0, a = 0;
		for (i = 0; i < size ; i++)
		{ a = i;
			for (j = 0; j < size ; j++)
			{
				if (b == 0)
				{
					if (array[j] % 10 == a)
					{
						narray[c] = array[j];
						c++;
                    }
                }
				if (b == 1)
				{
					if (array[j] / 10 == a)
					{
						narray[c] = array[j];
						c++;
                    }
                }
				if (b == 2)
				{
					if (array[j] / 100 == a)
					{ narray[c] = array[j];
						c++; } } } }
		for (i = 0; i < size ; i++)
			array[i] = narray[i];
		print_array(narray, size); }
	free(narray); }
