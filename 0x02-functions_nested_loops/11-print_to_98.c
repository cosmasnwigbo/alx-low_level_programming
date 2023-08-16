`include <stdio.h>
#include "main.h"
/**
  * print_to_98 - print all natural number from n to 98
  * fellowed by a new line
  * @n: parameter of function print_to_98
  * Return: 0
  *
  **/
void print_to_98(int n)
{
	int j;

	if (n <= 98)
	{
		for (j = n; j <= 98; j++)
		{
			if (j < 98)
				printf("%d, ", j);
			else if (j == 98)
				printf("%d ", j);
		}
	
	}
	else if (n >= 98)
	{
		for (j = n; j >= 98; j--)
		{
			if (j > 98)
			{
				printf("%d, ", j);
			}
		}
	}
}
