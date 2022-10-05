#include <stdio.h>

/**
  *main - entry point
  *
  *Description: program that prints the number of arguments passed into it
  *
  *@argc: argument count
  *
  *@argv: argument vector (arrays of stings)
  *Return: always 0
  */
int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}
