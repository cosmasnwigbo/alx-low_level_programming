#include "main.h"

/**
  * factorial - a function that returns the factorial of a given number
  *@n: parameter of function factorial
  *Return: integer
  **/


int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 1 || n == 0)
	{
		return (n);
	}
	else
		return (n * factorial(n - 1));
}
