#include "sort.h"

/**
 * selection_sort: Function that sorts in an ascending order
 * @size: size of the arr
 * @array: list
 */
void selection_sort(int *array, size_t size)
{
	size_t n, tmp, place;
	int swap;

	for (n = 0; n < size; n++)
	{
		tmp = n;
		for (place = n + 1; place < size; place++)
		{
			if (array[tmp] > array[place])
				tmp = place;
		}
		if (tmp != n)
		{
			swap = array[n];
			array[n] = array[tmp];
			array[tmp] = swap;
			print_array(array, size);
		}
	}
}
