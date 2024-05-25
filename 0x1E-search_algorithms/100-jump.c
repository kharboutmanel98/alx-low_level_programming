#include "search_algos.h"

/**
  * jump_search - Searches for a value in a sorted array
  * @array: A pointer to the first element of the array to search.
  * @size: The number of elements in the array.
  * @value: The value to search for.
  * Return: If array is NULL, -1. else first index where the value is located.
  * Description: Prints a value every time it is compared in the array.
  */

int jump_search(int *array, size_t size, int value)
{
	size_t i, nav, step;

	if (array == NULL || size == 0)
		return (-1);

	step = sqrt(size);

	for (i = nav = 0; nav < size && array[nav] < value;)
	{
		printf("Value checked array[%ld] = [%d]\n", nav, array[nav]);
		i = nav;
		nav += step;
	}

	printf("Value found between indexes [%ld] and [%ld]\n", i, nav);

	nav = nav < size - 1 ? nav : size - 1;
	for (; i < nav && array[i] < value; i++)
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
	printf("Value checked array[%ld] = [%d]\n", i, array[i]);

	return (array[i] == value ? (int)i : -1);
}
