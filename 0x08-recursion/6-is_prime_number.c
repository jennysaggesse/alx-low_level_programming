#include "main.h"

/**
  *primeCheck - checks to see if number is prime
  *
  *@i: factor check
  *
  *@j: possible prime
  *
  *Return: 1 if prime or 0 otherwise
  */
int primeCheck(int i, int j)
{
	if (j < 2 || i == 0)
		return (0);
	else if (i > j / 2)
		return (1);
	else
		return (primeCheck(i + 1, j));
}

/**
  *is_prime_number - states if a number is prime
  *
  *@n: number to check
  *
  *Return: 1 if prime or 0 otherwise
  */
int is_prime_number(int n)
{
	if (n == 2)
		return (1);
	return (primeCheck(2, n));
}
