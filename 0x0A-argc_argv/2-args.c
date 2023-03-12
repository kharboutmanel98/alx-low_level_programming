#include "main.h"

/**
  * main - point of entry
  * Description - A program to print all arguements it recieves
  * @argc: Argument count
  * @argv: Argument vector
  * Return: Always 0 (success)
  */

int main(int argc, char **argv)
{
	while (argc--)
	{
		printf("%s\n", *argv++);
	}
	return (0);
}
