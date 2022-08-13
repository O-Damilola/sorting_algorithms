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
    size_t x, y;

    for(x = 0; x < size - 1; x++)
    {
        for(y = 0; y < size - x - 1; y++)
        {
            if(array[y] > array[y + 1])
            {
                Swap(&array[y], &array[y + 1]);

                print_array(array, size);

            }

        }

    }

}
