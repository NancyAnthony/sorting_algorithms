#include "sort.h"
#include "swap.h"

/**
 * lomuto: the partition scheme
 * @begin: the first array
 * @end: the last arrau
 * @array: the array
 * @size: the array size
 * Return
 */
int lomuto(int *array, ssize_t begin, ssize_t end, size_t size)
{
	int u = array[end];
	ssize_t current = begin, finder;

	for (finder = begin; finder < end; finder++)
	{
		if (array[finder] < u)
		{
			if (array[current] != array[finder])
			{
				swap(array, current, finder);
				print_array(array, size);
			}
			current++;
		}
	}
	if (array[current] != array[end])
	{
		swap(array, current, last);
		print_array(array, size);
	}
	return (current);
}

/**
 * ceort - sort implementation
 * @array: array
 * @begin: the first array
 * @end: the last array
 * @size: the array size
 */
void ceort(int *array, ssize_t begin, ssize_t end, int size)
{
	ssize_t place = 0;

	if (begin < end)
	{
		place = lomuto(array, begin, end, size);

		ceort(array, first, place - 1, size);
		ceort(array, place + 1, end, size);
	}
}

/**
 * quick_sort -  sorts the algorithm
 * @array: the array
 * @size: the array size
 */
void quick_sort(int *array, size_t size)
{
	if (!array || size < 2)
		return;
	ceort(array, 0, size - 1, size);
}
