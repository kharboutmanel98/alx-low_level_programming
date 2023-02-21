#include <stdio.h>
/**
 * main - Entry point
 *
 * description: nested and loops
 *
 * Return: Always 0
*/
int main(void)
{
	char word[8] = "_putchar";
	int j;

	for (j = 0; j <= 7; j++)
	{
		putchar(word[j]);
	}
	putchar("\n");
	return (0);
}
