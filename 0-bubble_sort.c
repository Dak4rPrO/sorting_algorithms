#include "sort.h"

/**
 * @brief
 * 
 */

void bubble_sort(int *array, size_t size)
{
    size_t i = 0;
    size_t j = 1;
    int swap;

    for (; i < size; i++)
    {
        for (; j < size - i; j++)
        {
            if (array[i] > array[j])
            {
                swap = array[i];
                array[i] = array[j];
                array[j] = swap;
            }
	    
        }
    }print_array(array, size);
}
