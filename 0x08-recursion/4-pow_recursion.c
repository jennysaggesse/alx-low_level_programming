#include "main.h"

/**
  *_pow_recursion - power of number function
  *
  *@x: the number to raise to power
  *
  *@y: the power nmuber
  *
  *Return: x raise to power of y
  */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else
		return (x *  _pow_recursion(x, y - 1));
}
