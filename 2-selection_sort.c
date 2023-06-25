#include "sort.h"

/**
 * swap - swaps integers in the list(a, b)
 * @a: first integer pointer
 * @b: second integer pointer
 */
void swap(int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}

/**
 * selection_sort - sorts an array of integers in ascending order
 * by dividing the list, then looking for smallest value in list
 * by comparing all values and set the smallest value in left
 * side of ordered list
 *
 *  @array: pointer to the array that is being  sorted
 * @size: size of the array
 */
void selection_sort(int *array, size_t size)
{
	size_t k, h, min_index;

	if (array == NULL || size < 2)
		return;

	for (k = 0; k < size - 1; k++)
	{
		min_index = k;
		for (h = k + 1; h < size; h++)
		{
			if (array[h] < array[min_index])
				min_index = h;
		}

		if (min_index != k)
		{
			swap(&array[k], &array[min_index]);
			print_array(array, size);
		}
	}
}
