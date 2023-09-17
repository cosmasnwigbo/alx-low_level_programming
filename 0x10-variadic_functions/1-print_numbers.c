#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
  *print_numbers - a function that prints numbers
  *@separator: paramter of function
  *@n: number of function  parameter
  **/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	int value;

	va_list num;

	va_start(num, n);

	for (i = 0; i < n; i++)
	{
		value = va_arg(num, int);
		printf("%d", value);
		if (separator != NULL && i < (n - 1))
			printf("%s", separator);
	}
	printf("\n");
	va_end(num);
}
