#include "main.h"

/**
  * times_table - print  the 9 times table starting with 0
  * Return: 0
  *
  **/

void times_table(void)
{
	int	j,	k;

	for (j = 0; j < 10; j++)
	{
		for (k = 0; k < 10;  k++)
		{
			_putchar(j);
		}
		_putchar('\n');
	}
}

