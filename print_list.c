#include <stdio.h>
#include "sort.h"

/**
 * print_list: prints theo int list
 *
 * @list: The printed list
 */
void print_list(const listint_t *list)
{
	int u;

	u = 0;
	while (list)
	{
		if (u > 0)
			printf(", ");
		printf("%d", list->n);
		++u;
		list = list->next;
	}
	printf("\n");
}
