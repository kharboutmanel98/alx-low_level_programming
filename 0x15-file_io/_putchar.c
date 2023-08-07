#include "main.h"

/**
* _putchar - prints character to standard output
* @c: character to print
* Return: 1 on success, -1 on fail
*/

int _putchar(char c)
{
	return (write(1, &c, 1));
}
