#include "sort.h"

/**
 *quick_sort - array of integers
 *@array: array to sorted
 *@size: elements in the array
 */
void quick_sort(int *array, size_t size)
{
	quick_sort_recursive(array, 0, size - 1, size);
}

/**
 *quick_sort_recursive - recursive function to perform
 *@array: array to sort
 *@low: low index of the partition
 *@high: The high index of the partition
 *@size: Elements in the array
 */
void quick_sort_recursive(int *array, int low, int high, size_t size)
{
	int pivot_index;

	if (low < high)
	{
		pivot_index = partition(array, low, high, size);
		quick_sort_recursive(array, low, pivot_index - 1, size);
		quick_sort_recursive(array, pivot_index + 1, high, size);
	}
}

/**
 *partition - Partitions of the array
 *@array: array to be sorted
 *@low: low index of the partition
 *@high: high index
 *@size: number of elements
 *Return: pivot element
 */
int partition(int *array, int low, int high, size_t size)
{
	int i = low - 1;
	int j;

	for (j = low; j <= high - 1; j++)
	{
		if (array[j] < array[high])
		{
			i++;
			if (i < j)
			{
				swap(&array[i], &array[j]);
				print_array(array, size);
			}
		}
	}
	if (array[i + 1] > array[high])
	{
		swap(&array[i + 1], &array[high]);
		print_array(array, size);
	}

	return (i + 1);
}

/**
 *swap - Swaps elements
 *@c: first element
 *@d: second element
 */
void swap(int *c, int *d)
{
	int temp = *c;
	*c = *d;
	*d = temp;
}

