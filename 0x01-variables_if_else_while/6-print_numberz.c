#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - This is my function
 *
 * print the Numberz
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int c;

	for (c = '0'; c <= '9'; c++)
	{
		putchar(c);
	}

	putchar('\n');
	return (0);
}
