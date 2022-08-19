#ifndef SORT_H
#define SORT_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>


/**
 * struct listint_s - Doubly linked list node
 *
 * @n: Integer stored in the node
 * @prev: Pointer to the previous element of the list
 * @next: Pointer to the next element of the list
 */
typedef struct listint_s
{
	const int n;
	struct listint_s *prev;
	struct listint_s *next;
} listint_t;



void Swap(int *i, int *j);
void bubble_sort(int *array, size_t size);
void print_array(const int *array, size_t size);
void quick_sort(int *array, size_t size);
void my_sort(int *arr, int low, int high, int size);
void selection_sort(int *array, size_t size);
void insertion_sort_list(listint_t **list);
void shell_sort(int *array, size_t size);
void _ssort(int *a, int size, int n);
void swap_list(listint_t **ptr1, listint_t **ptr2, int n);
void increase_sort(listint_t **ptr, listint_t **limit, listint_t **list);
void decrease_sort(listint_t **ptr, listint_t **limit, listint_t **list);
void cocktail_sort_list(listint_t **list);
void counting_sort(int *array, size_t size);
void print_data(char *msg, int *a, int from, int to);
void merge(int *a, int low, int middle, int high, int *buff);
void msort(int *array, int low, int high, int *buffer);
void merge_sort(int *array, size_t size);
void swap_nums(int *arr, int a, int b);
void recursion_heap(int *arr, int i, size_t size, int limit);
void heap_sort(int *array, size_t size);
void radix_sort(int *array, size_t size);
void print_bitonic(int *arr, int i, int limit);
void sort_up(int *arr, int low, int high);
void sort_down(int *arr, int low, int high);
void recursion(int *arr, int low, int high, int bool, size_t size);
void bitonic_sort(int *array, size_t size);
void print_list(const listint_t *list);


#endif /* SORT_H */
