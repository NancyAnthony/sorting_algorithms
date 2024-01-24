#include "sort.h"

/**
 * node_swap - swap a node for the previous one
 * @node: swap
 * @list: node list
 * Return: return a pointer to a nodeo which was enter it
 */
listint_t *node_swap(listint_t *node, listint_t **list)
{
	listint_t *last = node->prev, *current = node;

	last->next = current->next;

	if (current->next)
		current->next->prev = last;
	current->next = last;
	current->prev = last->prev;
	last->prev = current;
	if (current->prev)
		current->prev->next = current;
	else
		*list = current;
	return (current);
}

/**
 * insertion_sort_list: seorts in ascending order a double linked list
 * @list:Double linked list
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *node, *temp;

	if (list == NULL || (*list)->next == NULL)
		return;
	node = (*list)->next;
	while (node)
	{
		temp = node;
		while ((temp->prev) && (temp->prev->n > temp->n))
		{
			temp = node_swap(temp, list);
			print_list(*list);
		}
		node = node->next;
	}
}
