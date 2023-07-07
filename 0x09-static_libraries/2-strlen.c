#include "main.h"

/**
 * _strlen - returns the lenght of string
 * @s: string to find length
 * Return: length of string
 */

int _strlen(char *s)
{
	int w = 0;

	while (*(s + w))
		w++;
	return (w);
}
