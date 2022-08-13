#include <stddef.h>
#include "sort.h"


/**
 * selection_sort - sorts an array of integers in
 * ascending order using the Selection sort algorithm
 *
 * @array: input array of integers
 * @size: size of the array
 * Return: no return
 */

void selection_sort(int *array, size_t size)
{
    size_t i, j;
    for(i = 0; i < size; i++)
    {
        for(j = i + 1; j < size; j++)
        {
            if(array[i] > array[j])
            {
                Swap(&array[i], &array[j]);

                print_array(array, size);
            }
        }
    }
}


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
