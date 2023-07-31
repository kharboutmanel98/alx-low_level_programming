#include <unistd.h>

/**
  * _putchar - prints character to stdout
  * @c: character to print
  * Return: 1 on succcess, -1 on fail
  */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
