#include <stdio.h>

/**
  *main - entry point
  *
  *Description: a program that prints its name, followed by a new line
  *If you rename the program, it will print the new name, without having
  *to compile it again
  *
  *@argc: argument count
  *
  *@argv: argument vector (arrays of string)
  *
  *Return: always 0
  */
int main(int argc, char *argv[])
{
	(void)argc;
	printf("%s\n", argv[0]);
	return (0);
}
