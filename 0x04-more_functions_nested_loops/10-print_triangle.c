#include "main.h"

/**
  * print_triangle - print a triangle
  * @size: parameter for function print_triangle
  * fellowed by a new line
  * Return: 0
  **/

void print_triangle(int size)
{
	int i, j;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			for (j = 0; j <= size; j++)
			{
				if ((i + j) < size)
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
}
