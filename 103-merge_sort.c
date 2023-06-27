#include "sort.h"

/**
 * merge_subarray - function that sorts a subarray of integers.
 * @subarray: subarray of an array of integers to sort.
 * @buff: buffer to store the sorted subarray.
 * @front: The front index of the array.
 * @mid: The middle index of the array.
 * @back: The back index of the array.
 *
 * Return: nothing
 */
void merge_subarray(int *subarray, int *buff, size_t front, size_t mid,
		size_t back)
{
	size_t x, y, z = 0;

	printf("Merging...\n[left]: ");
	print_array(subarray + front, mid - front);

	printf("[right]: ");
	print_array(subarray + mid, back - mid);

	for (x = front, y = mid; x < mid && y < back; z++)
		buff[z] = (subarray[x] < subarray[y]) ? subarray[x++] : subarray[y++];
	for (; x < mid; x++)
		buff[z++] = subarray[x];
	for (; y < back; y++)
		buff[z++] = subarray[y];
	for (x = front, z = 0; x < back; x++)
		subarray[x] = buff[z++];

	printf("[Done]: ");
	print_array(subarray + front, back - front);
}

/**
 * merge_sort_recursive - function that implements the merge sort algorithm
 * through recursion.
 * @subarray: subarray of an array of integers to sort.
 * @buff: buffer to store the sorted result.
 * @front: The front index of the subarray.
 * @back: The back index of the subarray.
 */
void merge_sort_recursive(int *subarray, int *buff, size_t front, size_t back)
{
	size_t mid;

	if (back - front > 1)
	{
		mid = front + (back - front) / 2;
		merge_sort_recursive(subarray, buff, front, mid);
		merge_sort_recursive(subarray, buff, mid, back);
		merge_subarray(subarray, buff, front, mid, back);
	}
}

/**
 * merge_sort - function that sorts an array of integers in ascending order
 * using the merge sort algorithm.
 * @array: An array of integers
 * @size: The size of the array of integers
 *
 * Return: nothing
 */
void merge_sort(int *array, size_t size)
{
	int *buff;

	if (array == NULL || size < 2)
		return;

	buff = malloc(sizeof(int) * size);
	if (buff == NULL)
		return;

	merge_sort_recursive(array, buff, 0, size);

	free(buff);
}
