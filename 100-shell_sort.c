#include "sort.h"

/**
 * shell_sort - function that sorts an array of integers using the
 * Shell sort algorithm
 *
 * @array: array of integers
 * @size: The size of the array
 *
 * Return: nothing
 */
void shell_sort(int *array, size_t size)
{
	size_t gap = 1, k, v;
	int tmp;

	if (!array || size < 2)
		return;

	while (gap < size / 3)
		gap = gap * 3 + 1;

	while (gap >= 1)
	{
		for (k = gap; k < size; k++)
		{
			tmp = array[k];
			for (v = k; v >= gap && array[v - gap] > tmp; v -= gap)
				array[v] = array[v - gap];
			array[v] = tmp;
		}
		gap = (gap - 1) / 3;
		print_array(array, size);
	}
}
