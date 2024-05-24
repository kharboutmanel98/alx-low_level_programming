#include "search_algos.h"

/**
  * linear_search - Searches for a value in an array using linear search
  * @array: A pointer to the first element
  * @size: number of elements in array
  * @value: value to search for
  * Description: prints a value everytime it's compared
  * Return: if array is null, -1 otherwise, first index where value is located
  */

int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	if (array != NULL)
	{
		for (; i < size; i++)
		{
			printf("Value checked array[%lu] = [%d]\n", i, array[i]);

			if (array[i] == value)
			{
				return (i);
			}
		}
	}
	return (-1);
}
