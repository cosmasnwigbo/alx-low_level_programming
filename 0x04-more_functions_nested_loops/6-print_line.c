#include "main.h"

/**
  * print_line - a function that draws a straight line
  * @n: parameter for function print_line
  * fellowed by a new line
  **/

void print_line(int n)
{
	int x;

	if (n <= 0)
	{
		_putchar('\n');
	}
	for (x = 1; x <= n; x++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
