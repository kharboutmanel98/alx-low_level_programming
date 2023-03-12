#include "main.h"

/**
  * main - Entry point
  * Description - A program that prints the number of arguments passed into it
  * @argc: Argument count
  * @argv: Argument vector
  * Return: Always 0 (success)
  */

int main(int argc, char **argv __attribute__((unused)))
{
	if (argc > 0)
	printf("%d\n", argc - 1);
	return (0);
}
