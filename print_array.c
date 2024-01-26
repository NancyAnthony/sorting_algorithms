#include <stdlib.h>
#include <stdio.h>

/**
 * print_array - Print int array
 *
 * @array: The printed arr
 * @size: No of @array elements
 */
void print_array(const int *array, size_t size)
{
	size_t u;

	u = 0;
	while (array && u < size)
	{
		if (u > 0)
			printf(", ");
		printf("%d", array[u]);
		++u;
	}
	printf("\n");
}
