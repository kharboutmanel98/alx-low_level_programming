#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - This is my function
 *
 * print the alphabet in lowercase and then in uppercase
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char lower = 'a';
	char Upper = 'A';

	while (lower <= 'a')
	{
		putchar(lower);
		lower++;
	}
	while (Upper <= 'A')
	{
		putchar(Upper);
		Upper++;
	}

	putchar('\n');
	return (0);
}
