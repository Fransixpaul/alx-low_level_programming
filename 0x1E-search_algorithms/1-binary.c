#include <stdio.h>
#include "search_algos.h"

/**
 * print_array - prints the current sub array of integers being searched
 * @array: pointer to the first element of the array to print
 * @low: index of the first element to print
 * @high: index of the last element to print
 */
void print_array(int *array, size_t low, size_t high)
{
	size_t i;

	printf("Searching in array: ");
	for (i = low; i <= high; i++)
	{
		if (i > low)
			printf(", ");
		printf("%d", array[i]);
	}
	printf("\n");
}

/**
 * binary_search - searches for a value in a sorted array
 * using the Binary search algorithm
 * @array: pointer to the first element in the array to search in
 * @size: number of element in array
 * @value: value to search for
 *
 * Return: the index where the value is located, or -1 if value is not present
 * or if array is NULL
 */
int binary_search(int *array, size_t size, int value)
{
	size_t low, high, mid;

	if (array == NULL)
		return (-1);

	low = 0;
	high = size - 1;

	while (low <= high)
	{
		print_array(array, low, high);
		mid = (low + high) / 2;
		if (array[mid] == value)
			return (mid);
		else if (array[mid] < value)
			low = mid + 1;
		else
			high = mid - 1;
	}

	return (-1);
}
