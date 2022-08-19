#include <stdio.h>
#include <stddef.h>
#include "sort.h"

/**
 * Swap - function that interchanges  an array
 * of integers in ascending order using the
 * Bubble sort algorithm
 *
 * @array: input array
 * @size: size of the array
 * Return: no return
 */

void Swap(int *i, int *j){

    int temp;

    temp = *i;

    *i = *j;

    *j = temp;

}


/**
 * bubble_sort - function that sorts an array
 * of integers in ascending order using the
 * Bubble sort algorithm
 *
 * @array: input array
 * @size: size of the array
 * Return: no return
 */

void bubble_sort(int *array, size_t size)
{
	size_t n = size, new_n, i;

	while (n > 1)
	{
		new_n = 0;
		for (i = 1; i <= n - 1; i++)
		{
			if (array[i - 1] > array[i])
			{
				swap_values(&array, i - 1, i);
				print_array(array, size);
				new_n = i;
			}
		}
		n = new_n;
	}
}
