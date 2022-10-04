#include "main.h"
#include <stdlib.h>

/**
  *str_concat -  a function that concatenates two strings
  *
  *@s1: first string
  *
  *@s2: second string
  *
  *Return: pointer of array of character
  */
char *str_concat(char *s1, char *s2)
{
	char *a;
	int i, j, x, size;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; s1[i] != '\0'; i++)
	;
	{
		for (j = 0; s2[j] != '\0'; j++)
		;
		{
			a = (char *) malloc(sizeof(char) * (i + j + 1));
			if (a == NULL)
			{
				free(a);
				return (NULL);
			}
		}
	}
	for (x = 0; x < i; x++)
	{
		a[x] = s1[x];
	}
	size = j;
	for (j = 0; j <= size; x++, j++)
	{
		a[x] = s2[j];
	}
	return (a);
}
