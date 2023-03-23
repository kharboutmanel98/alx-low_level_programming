#include "function_pointers.h"

/**
  * print_name - a function to print name
  * @name: pointer name to print
  * @f: function pointer
  * Return: Always 0 (success)
  */

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
