#include "sort.h"
#include "swap.h"

/**
 * counting_sort - sorth method
 * @array: array
 * @size: size
 */
void counting_sort(int *array, size_t size)
{
	int index, maximum = 0, *counter = '\0', *tmp = '\0';
	size_t i;

	if (array == NULL || size < 2)
		return;
	/*max neo*/
	for (i = 0; i < size; i++)
		if (array[i] > maximum)
			maximum = array[i];
	counter = _calloc(maximum + 1, sizeof(int));
	tmp = _calloc(size + 1,sizeof(int));
	/*element*/
	for (i = 0; i < size; i++)
		counter[array[i]]++;
	/*value*/
	for (index = 1; index <= maximum; index++)
		counter[index] += counter[index - 1];
	print_array(counter, maximum + 1);
	/*array*/
	for (i = 0; i < size; ++i)
	{
		tmp[counter[array[i]] - 1] = array[i];
		counter[array[i]]--;
	}
	for (i = 0; i < size; i++)
		array[i] = tmp[i];
	free(tmp);
	free(counter);

}
