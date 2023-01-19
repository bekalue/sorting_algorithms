#ifndef SORT_H
#define SORT_H

#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

/**
 * stuct listint_s - Doubly linked list node.
 *
 * @n: Integer stored in the node.
 * @prev: Pointer to the previous element of the list.
 * @next: Pointer to the next element of the list.
 */
typedef struct listint_s
{
	const int n;
	struct listint_s *prev;
	struct listint_s *next;
} listint_t;

void print_list(const listint_t *list);  /* Source File: print_list.c */
void print_array(const int *array, size_t size); /* Source File: print_array.c */

/*    BUBBLE SORT     */
void bubble_sort(int *array, size_t size); /* Source File: 0-bubble_sort.c */

/*   INSERTION SORT  */
void insertion_sort_list(listint_t **list); /* Source File: 1-insertion_sort_list.c */

/*   SELECTION SORT */
void selection_sort(int *array, size_t size); /* Source File: 2-selection_sort.c */

/*   QUICK SORT      */
void quick_sort(int *array, size_t size); /*source File: 3-quick_sort.c */

/*   SHELL SORT USING KNUTH SEQUENCE */
void shell_sort(int *array, size_t size); /* source file: 100-shell_sort.c */

/*   COCKTAIL SHAKER SORT  */
void cocktail_sort_list(listint_t **list); /* source file: 101-cocktail_sort_list.c*/

/*   COUNTING SORT  */
void counting_sort(int *array, size_t size); /* source file: 102-counting_sort.c */

/*   MERGE SORT    */
void merge_sort(int *array, size_t size);  /* source file: 103-merge_sort.c */

/*   HEAP SORT   */
void heap_sort(int *array, size_t size);  /* SOURCE FILE: 104-heap_sort.c */

/*  RADIX SORT  */
void radix_sort(int *array, size_t size); /* SOURCE FILE: 105-radix_sort.c */

/*  BITONIC SORT */
void bitonic_sort(int *array, size_t size); /* SOURCE FILE: 106-bitonic_sort.c */

/*  QUICK SORT USING HOARE PARTITION SCHEME */
void quick_sort_hoare(int *array, size_t size); /* SOURCE FILE: 107-quick_sort_hoare.c */

#endif
