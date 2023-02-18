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
	char l = 'a';
	char U = 'A';

	while (l <= 'a')
	{
		putchar(l);
		l++;
	}
	while (U <= 'A')
	{
		putchar(U);
		U++;
	}
	putchar('\n');
	return (0);
}
