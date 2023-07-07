#include "main.h"

/**
 * _strncat - appends src to the dest string
 * @dest: string to append by src
 * @src: string to append to dest
 * @n: largest number of bytes to append
 * Return: address of dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int a, b;

	a = b = 0;
	while (*(dest + a))
		a++;
	while (b < n && *(src + b))
	{
		*(dest + a) = *(src + b);
		a++;
		b++;
	}
	if (b < n)
		*(dest + a) = *(src + b);
	return (dest);
}
