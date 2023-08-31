#include "main.h"

/**
  * _pow_recursion - a function that returns x raised to the power of y
  *@x: parametr of function _pow_recursion
  *@y: parameter of function _pow-recursion
  *Return: integer
  **/

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x,  y - 1));
	}
}
