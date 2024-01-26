#ifndef SWAP_H
#define SWAP_H

#include "sort.h"

/**
 * swap_node - swap a node
 * @node: the node
 * @list: the node list
 * Return: returns to a pointer
 */
listint_t *swap_node(listint_t *node, listint_t **list)
{
	listint_t *back = node->prev, *current = node;

	back->next = current->next;
	if (current->next)
		current->next->prev = back;
	current->next = back;
	current->prev = back->prev;
	back->prev = current;
	if (current->prev)
		current->prev->next = current;
	else
		*list = current;
	return (current);
}
/**
 * swap - the element position
 * @array: the array
 * @first: the array element
 * @second: the element
 */
void swap(int *array, int first, int second)
{
	int u;

	u = array[first];
	array[first] = array[second];
	array[second] = u;
}

/**
 * _calloc - this is a calloc function
 * @nmemb: no of elements
 * @size: the size of elements
 * Return: the pointer
 */
void *_calloc(unsigned int nmemb, unsigned size)
{
	unsigned int i = 0;
	char *p;

	if (nmemb == 0 || size == 0)
		return ('\0');
	p = malloc(nmemb * size);
	if (p == NULL)
		return ('\0');
	for (i = 0; i < (nmemb *size); i++)
		p[i] = '\0';
	return(p);
}

/**
 * i_swap _ swaps the int
 * @f_int: first integer
 * @s_int: second integer
 * */
void i_swap(int *f_int, int *s_int)
{
	int k = *f_int;
	*f_int = *s_int;
	*s_int = k;
}
#endif
