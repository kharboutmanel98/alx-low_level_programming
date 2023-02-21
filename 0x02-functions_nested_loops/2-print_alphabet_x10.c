#include "main.h"

/**
 * print_alphabet_x10  - check description
 *
 * Description: to print alphabet in lowercase 10 times
 *
 * Return: Nothin.
 */

void print_alphabet_x10(void)
{
	char i;
	int j;

	for (j = 0; j < 10; j++)
	{
		for (i = 'a'; i <= 'z'; i++)
		{
			_putchar(j);
		}
	}
	_putchar('\n');
}
