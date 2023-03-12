#include <unistd.h>

/**
  * _putchar: Displays character
  * @c: input character
  * Return: returns 1 or -1
  */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
