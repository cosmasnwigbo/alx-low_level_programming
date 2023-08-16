#include "main.h"

/**
  * times_table - print  the 9 times table starting with 0
  * Return: 0
  *
  **/

void times_table(void)
{
	int	j,	k, x;

	for (j = 0; j < 10; j++)
	{
		for (k = 1; k < 10;  k++)
		{
			x = k * j;
			_putchar(x + '0');
		}
		_putchar('\n');
	}
}

