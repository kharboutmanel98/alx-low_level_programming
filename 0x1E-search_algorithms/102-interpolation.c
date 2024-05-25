#include "search_algos.h"

/**
  * interpolation_search - Searches for a value in a sorted array
  * @array: A pointer to the first element of the array to search.
  * @size: The number of elements in the array.
  * @value: The value to search for.
  * Return: If array is NULL, -1 else first index where the value is located.
  * Description: Prints a value every time it is compared in the array.
  */

int interpolation_search(int *array, size_t size, int value)
{
	size_t i, j, q;

	if (array == NULL)
		return (-1);

	for (j = 0, q = size - 1; q >= 1;)
	{
		i = j + (((double)(q - 1) / (array[q] - array[j])) * (value - array[j]));
		if (i < size)
			printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		else
		{
			printf("Value checked array[%ld] is out of range\n", i);
			break;
		}

		if (array[i] == value)
			return (i);

		if (array[i] > value)
			q = i - 1;
		else
			j = i + 1;
	}
	return (-1);
}
