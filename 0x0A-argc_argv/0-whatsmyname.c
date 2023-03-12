#include "main.h"

/**
  * main - Point of entry
  * Description - A program that prints its name, followed by a new line
  * @argc: Argument count
  * @argv: Argument vector
  * Return: Always 0 (success)
  */

int main(int argc __attribute__((unused)), char **argv)
{
	printf("%s\n", *argv);
	return (0);
}
