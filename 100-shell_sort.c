#include "sort.h"

/**
 * shell_sort - use the shell sort algo to sort an array
 * @array: array to be sorted
 * @size: size of the array
 * Return: void
 */

void shell_sort(int *array, size_t size)
{
	size_t i = 0, j = 0, gap = 0;
	int temp = 0;

	if (size < 2 || array== NULL)
		return;
	while (gap < size / 3)
		gap = gap * 3 + 1;

	for (; gap > 0; gap = (gap - 1) / 3)
	{
		for (i = gap; i < size; i++)
		{
			temp = array[i];
			for (j = i;j >= gap && array[j - gap] > temp;
					j -= gap)
			{
				if (array[j] != array[j - gap])
					array[j] = array[j - gap];
			}
			if (array[j] != temp)
				array[j] = temp;
		}
		print_array(array, size);
	}
}
