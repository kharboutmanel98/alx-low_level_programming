#include "main.h"

/**
 * _puts - function that print a string, followed by new line
 * @str: pointer that point the string
 * Return: nothing
 */

void _puts(char *str)
{
	int i = 0;

	while (*(str + i))
	{
		_putchar(*(str + i));
		i++;
	}
	_putchar('\n');
}
