#include <stddef.h>
#include "sort.h"

/**
 * quick_sort - function that sorts an array
 * of integers in ascending order using the
 * quick sort algorithm
 *
 * @array: input array
 * @size: size of the array
 * Return: no return
 */

void quick_sort(int *array, size_t size)
{
    my_sort(array, 0, size - 1, size);
}


/**
 * my_sort - auxiliary function for the quick_sort function
 * @a: input array
 * @low: index for the first element
 * @high: index for the last element
 * @size: size of the array
 * Return: no return
 */

void my_sort(int *arr, int low, int high, int size){
    int pivot, i, j;
    if(low < high){
        pivot = arr[high];
        i = low;
        for(j = low; j < high; j++) {
            if(arr[j] < pivot) {
                Swap(&arr[i], &arr[j]);
                print_array(arr, size);
                i = i + 1;
            }
        }
        Swap(&arr[i], &arr[high]);
        print_array(arr, size);
    }

    my_sort(arr, low, i-1, size);

    my_sort(arr, i+1, high, size);
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
