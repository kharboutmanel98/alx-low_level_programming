#include "main.h"
/**
 * _islower - check description
 *
 * @c: character to check
 *
 * Description: check for lowercase
 *
 * Return: 1 if lowercase
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
		else
	{
		return (0);
	}
	_putchar('\n');

}
