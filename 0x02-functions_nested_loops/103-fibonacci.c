#include <stdio.h>

/**
 * main - print fibonacci
 *
 * Return: always 0
 */
int main(void)
{
	unsigned int x, y, z, i, s;

	x = 1;
	y = 2;
	z = 3;
	s = 2;
	for (i = 2; i <= 32; i++)
	{
		if (z % 2 == 0)
			s = s + z;
		x = y;
		y = z;
		z = x + y;
	}
	printf("%u\n", s);
	return (0);
}
