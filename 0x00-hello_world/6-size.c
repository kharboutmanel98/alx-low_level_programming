#include <stdio.h>

/*
 * main - function of print
 *
 * print the size of various types on the computer it is compiled and run on.
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	printf("Size of an int: %lu byte(s)\n", sizeof(int));
	printf("Size of an long int: %lu byte(s)\n", sizeof(long int));
	printf("Size of an char: %lu byte(s)\n", sizeof(char));
	printf("Size of an float: %lu byte(s)\n", sizeof(float));
	return (0);
}
