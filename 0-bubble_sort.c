#include "sort.h"
/**
 * bubble_sort - a function that sorts an array of integers
 *		in asceding order using the bubble sort algorithm.
 *
 * @array: the array to be sorted.
 * @size: Number of elements in @array.
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, j;
	int temp;
	bool sorted;

	for (i = 0; i < size - 1; i++)
	{
		sorted = false;
		for (j = 0; j < size - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
				sorted = true;
				print_array(array, size);
			}
		}
		if (!sorted)
			break;
	}
}
