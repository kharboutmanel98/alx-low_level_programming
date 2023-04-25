#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - This is my function
 *
 * print the alphabet in lowercase
 *
 * Return: Always 0 (Success)
 */

int main(void)
{

	char al;

	al = 'a';

	while (al <= 'z')
{

	putchar(al);

	al++;
}

putchar('\n');
return (0);
}
