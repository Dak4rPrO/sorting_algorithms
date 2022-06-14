#include "sort.h"

/**
 * quick_sort - function that sorts an array of integers in ascending
 * order using the Quick sort algorithm.
 * @array: array a ordenar.
 * @size: tamaño del array.
 */

void partition(int *array, int izq, int der)
{
	izq = 0;
	der = 0;
	size_t i = 0;
	size_t swap;
	int pivote = array[der];
	size_t j = 0;
	j = izq;
	i = izq;

	while (j < der)
	{
		printf("hola");
		if (array[j] < pivote)
		{
			swap = array[i];
			array[i] = array[j];
			array[j] = swap;
			++i;
		}
	}
	swap = array[i];
	array[i] = array[j];
	array[j] = swap;
	return i;
}

void quick_sort(int *array, size_t size)
{
	if (izq >= der)
		return;
	int i = partition(array, izq, der);

	quick_sort(array, izq, i - 1);
	quick_sort(array, i + 1, der);
}
