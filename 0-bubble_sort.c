#include "sort.h"

/**
 * bubble_sort - func that sorts an array using bubble sort algorithm
 * @array: array to be sorted
 * @size: size of the array
 * Return: void
 */

void bubble_sort(int *array, size_t size)
{
	size_t i, j;
	int temp, isSwapped = 0;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				temp = array[j + 1];
				array[j + 1] = array[j];
				array[j] = temp;
				isSwapped = 1;
				print_array(array, size);
			}
		}
		if (isSwapped == 0)
		{
			break;
		}
	}
}
