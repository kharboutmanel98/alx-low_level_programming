#include "main.h"

/**
  *print_line - print _(line) n times
  *
  *@n: times lines is going to be printed
  *Return: void
  */
void print_line(int n)
{
	int j;

	for (j = 1; j <= n; j++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
