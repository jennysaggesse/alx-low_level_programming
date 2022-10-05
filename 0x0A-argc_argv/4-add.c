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
	int i, sum;

	sum = 0;
	for (i = 1; i < argc; i++) 
	{
		if (argc > 1)
		{
			sum += atoi(argv[i]);
		}
		else if (argc <= 1)
		{
			printf("0\n");
		}
		else (!isdigit(argv[i]))
		{
			printf("Error\n");
			return (1);
		}
	}
	printf("%d\n", sum);  
	return (0);
}
