#include "main.h"

/**
  * factorial - a function that returns the factorial of a given number
  * @a: An input integer
  * Return: The factorial of a
  */

int factorial(int a)
{
	if (a < 0)
	{
		return (-1);
	}
	if (a == 1)
	{
		return (1);
	}
	return (a * factorial(a - 1));
}
