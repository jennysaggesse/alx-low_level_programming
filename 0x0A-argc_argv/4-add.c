#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

/**
  *main -Entry point
  *
  *Description: a program that adds positive numbers
  *If no number is passed to the program, print 0, followed by a new line
  *If one of the number contains symbols that are not digits, print Error,
  *followed by a new line, and return 1
  *
  *@argc: argument count
  *
  *@argv: argument vector (arrays of string)
  *
  *Return: always 0
  */
int main(int argc, char *argv[])
{
	int i, j, add = 0;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
		}
		add += atoi(argv[i]);
	}
	printf("%d\n", add);
	return (0);
}

