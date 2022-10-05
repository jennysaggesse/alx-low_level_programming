#include "main.h"

/**
  *square - square function
  *
  *@n: value entered
  *
  *@i: square root
  *
  *Return: square of the value of n
  */
int square(int n, int i)
{
	if (i * i == n)
		return (i);
	if (i * i < n)
		return (square(n, i + 1));
	return (-1);
}

/**
  *_sqrt_recursion - find square root
  *
  *@n: number to fine square root
  *
  *Return: square root of n
  */
int _sqrt_recursion(int n)
{
	return (square(n, 1));
}
