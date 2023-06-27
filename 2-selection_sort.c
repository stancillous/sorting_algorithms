#include "sort.h"

/**
 * selection_sort - functions that sorts using selection sort algo
 * @array: array to be sorted
 * @size: size of the array
 * Return: void
 */

void selection_sort(int *array, size_t size)
{
	size_t i, j, smallest, temp, idx;

	for (i = 0; i < size; i++)
	{
		smallest = array[i];
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < smallest)
			{
				smallest = array[j];
				idx = j;
			}
		}
		if (smallest != array[i])
		{
			temp = array[i];
			array[idx] = temp;
			array[i] = smallest;
			print_array(array, size);
		}
	}
}
