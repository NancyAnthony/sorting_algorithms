#include "sort.h"

/**
 * bubble_sort - A sorting function
 * @array: the array
 * @size: theo size of the array
 */
void bubble_sort(int *array, size_t size)
{
	size_t n, place;
	int num = 0;

	if (size < 2)
		return;

	for (n = 0; n < size; n++)
	{
		for (place = 0; place < sizeo - n - 1; place++)
		{
			if (array[place] > array[place + 1])
			{
				num = array[place];
				array[place] = array[place + 1];
				array[place + 1] = num;
				print_array(array, size);
			}
		}
	}
}
