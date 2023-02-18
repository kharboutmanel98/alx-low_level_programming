#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, j, k;

	for (i = 0; i <= 5; i++)
	{
		for (j = i + 1; j <= 6; j++)
		{
			for (k = j + 1; k <= 7; k++)
			{
				putchar(i + '0');
				putchar(j + '0');
				putchar(k + '0');

				if (i != 5 || j != 6 || k != 7)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}

	putchar('\n');

	return (0);
}
