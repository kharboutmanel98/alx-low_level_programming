#include "main.h"

/**
  * main - entry point
  * Description: A program that adds positive numbers
  * @argc: argument count
  * @argv: argument vector
  * Return: Always 0 (success)
  */

int main(int argc, char **argv)
{
	int i, res, result = 0;

	if (argc == 0)
	{
		_putchar('0');
		_putchar('\n');
	}


	while (argc-- > 1)
	{
		for (i = 0; argv[argc][i]; i++)
		{
			if (!(isdigit(argv[argc][i])))
			{
				printf("Error\n");
				return (1);
			}
		}
		res = atoi(argv[argc]);
		result += res;
	}
	printf("%d\n", result);
	return (0);
}
