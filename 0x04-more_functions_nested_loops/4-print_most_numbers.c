#include "main.h"
/**
 * print_most_numbers - a function that print most numbers from  0 t0 9
 * Return 0 - 9, execpt 2 and 4
 * fellowed by a new line
 **/

void print_most_numbers(void)
{
	int c;

	for (c = 0; c <= 9; c++)
	{
		if ((c != 2) && (c != 4))
		{
			_putchar(c + '0');
		}
	}
	_putchar('\n');
}

