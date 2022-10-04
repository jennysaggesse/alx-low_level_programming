#include "main.h"
#include <stdlib.h>

/**
  *_strdup -  a function that returns a pointer to a newly allocated space
  *in memory, which contains a copy of the string given as a parameter.
  *
  *@str: string
  *
  *Return: str
  */
char *_strdup(char *str)
{
	char *a;
	int i, j;

	if (str == NULL)
	{
		return (NULL);
	}

	for (i = 0; str[i] != '\0'; i++)
	;
	{
		a = (char *) malloc(sizeof(char) * (i + 1));
		if (a == NULL)
		{
			return (NULL);
		}
		else
		{
			for (j = 0; j <= i; j++)
			{
				a[j] = str[j];
			}
		}
	}
	return (a);
}
