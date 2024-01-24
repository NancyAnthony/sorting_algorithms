#ifndef SORT_H
#define SORT_H

#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

/**
 * struct listint_s : list node
 *
 * @n: Integer node
 * @prev:Previous element pointer
 * @next: Next element pointer
 */
typedef struct listint_s
{
	const int n;
	struct listint_s *prev;
	struct listint_s *next;
} listint_t;

/*print_list*/
void print_list(const listint_t *list);

/* print_array */
void print_array(const int *array, size_t size);

/* bubble_sort */
void bubble_sort(int *array, size_t size);

/* insertion_sort_list.c */
void insertion_sort_list(listint_t **list);

/* selection_sort.c */
void selection_sort(int *array, size_t size);

/* quick_sort.c */
void quick_sort(int *array, size_t size);
int lomuto_partition(int *array, ssize_t first, ssize_t last, size_t size);
void q_sort(int *array, ssize_t first, ssize_t last, int size);

/* shell sort */
void shell_sort(int *array, size_t size);

/* cocktail_sort_list.c */
void cocktail_sort_list(listint_t **list);

/* counting_sort.c */
void counting_sort(int *array, size_t size);

/* merge_sort.c */
void merge(int *arr, int *tmp, int start, int mid, int end);
void mergesort(int *array, int *tmp, int start, int end);
void merge_sort(int *array, size_t size);

void *_calloc(unsigned int nmemb, unsigned int size);
#endif
