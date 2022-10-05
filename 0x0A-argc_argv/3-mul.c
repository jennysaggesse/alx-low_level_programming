#include <stdio.h>
#include <stdlib.h>

/**
  *main - entry point
  *
  *description: program that multiplies two numbers
  *program should print the result of the multiplication,
  *followed by a new line
  *
  *@argc: argument count
  *
  *@argv: argument vector (arrays of string)
  *
  *Return: always 0
  */
int main(int argc, char *argv[])
{
	int i, mul;

	mul = 1;
	if (argc <= 2)
	{
		printf("Error\n");
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			mul *= atoi(argv[i]);
		}
		printf("%d\n", mul);
	}
	return (0);
}
