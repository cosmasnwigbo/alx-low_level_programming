#include "main.h"

/**
  * print_triangle - print a triangle
  * fellowed by a new line
  * Return: 0
  **/

void print_triangle(int size)
{
	int i;
	int j;

	if ( size <= 0)
		_putchar('\n');
	
	for (i = 0; i <= size; i++)
	{
		for (j = 0; j <= i; j++)
		{
			if ((j + i) < size)
			{
				_putchar(' ');
			}
			else
			{
				_putchar('#');
			}
		}
		_putchar('\n');
	}
}
