#include "main.h"

/**
 * malloc_checked - A function that allocates memory using malloc.
 * @b: An unsigned input integer
 * Return: Apointer to allocated memory or NULL if it fails
 */
void *malloc_checked(unsigned int b)
{
	char *y;

	y = malloc(b);

	if (y == NULL)
		exit(98);

	return (y);
}
