#include "main.h"

/**
  * print_diagonal - print draw a diagonal line
  *
  **/

void print_diagonal(int n)
{
	int i, j;
	
	if (n <= 0)
		_putchar('\n');

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			if ((i + j) > n)
				_putchar(' ');	
		}
		_putchar('\\');
		_putchar('\n');
	}
}

