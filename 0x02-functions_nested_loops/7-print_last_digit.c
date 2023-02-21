#include "main.h"
/**
 * print_last_digit -function that prints the last digit of a number
 *@d: parameter member d
 * Return: always o if success
 */
int print_last_digit(int d)
{
	int y;

	if (d < 0)
		d = -d;
	y = d % 10;
	if (y < 0)
		y = -y;
	_putchar(y + '0');
	return (y);
}
