#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
  *sum_them_all - a function that returns the sum of all its parameters.
   *@n: number of parameters
  *Return: sum
  **/



int sum_them_all(const unsigned int n, ...)
{
	int  sum = 0;

	unsigned int i;

	va_list  num;

	va_start(num, n);

	if (n == 0)
		return (0);

	for (i = 0; i < n; i++)
	{
		sum = sum + va_arg(num, int);
	}
	va_end(num);
	return (sum);
}

