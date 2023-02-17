#include <stdio.h>

/**
 * main - prints "the size of various types on the computer it is compiled and run on"
 * Return: Always 0 (success)
 *
 */

int main(void)
{
	int a;
	long int b;
	long long int c;
	char d;
	float f;

	printf("Size of an int: %lu byte(s)\n", sizeof(a));
	printf("Size of an long int: %lu byte(s)\n", sizeof(b));
	printf("Size of a long long int: %lu byte(s)\n", sizeof(c));
	printf("Size of an char: %lu byte(s)\n", sizeof(d));
	printf("Size of an float: %lu byte(s)\n", sizeof(f));
	return (0);
}
