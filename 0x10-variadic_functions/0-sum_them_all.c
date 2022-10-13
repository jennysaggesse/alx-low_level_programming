#include "variadic_functions.h"
#include <stdarg.h>

/**
  *sum_them_all - a function that returns the sum of all its parameters
  *
  *@n: number of parameter
  *
  *Return: sum of the parameter
  */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;

	int sum = 0;

	va_list ptr;

	va_start(ptr, n);

	for (i = 0; i < n; i++)
	{
		if (n == 0)
		{
			return (0);
		}
		else
		{
			sum = sum + va_arg(ptr, int);
		}
	}
		va_end(ptr);
		return (sum);
}
