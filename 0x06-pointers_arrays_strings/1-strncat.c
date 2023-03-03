#include "main.h"

/**
 * _strncat - a function that concatenates two strings.
 * @dest: an input string
 * @src: an input string
 * @n: an input integer
 * Return: A pointer to the resulting string
 */
char *_strncat(char *dest, char *src, int n)
{
	int srclen = 0;
	int i = 0;
	char *srcPtr = src;
	char *destPtr = dest;

	while (*src)
	{
		srclen++;
		src++;
	}

	while (*dest)
	{
		dest++;
	}

	if (n > srclen)
		n = srclen;

	for (src = srcPtr; i < n; i++)
		*dest++ = *src++;

	*dest = '\0';
	return (destPtr);
}
