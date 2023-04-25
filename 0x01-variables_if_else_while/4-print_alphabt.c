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
	char letter = 'a';

	for (letter = 'a'; letter <= 'z' ; letter++)
	{
		if (letter != 'e' && letter != 'q')
		{
			putchar(letter);
		}
	}

	putchar('\n');
	return (0);
}
