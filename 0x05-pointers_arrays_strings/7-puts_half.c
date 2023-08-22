#include "main.h"

/**
  *puts_half - a function that prints half of a string
  *@str: the parameter of function puts_half
  *fellowed by a new line
  **/

void puts_half(char *str)
{
	int i;
	int len = 0;
	int k;

	while (str[len] != '\0')
	{
		len++;
	}

	if (len % 2 == 0)
	{
		for (i = len / 2; str[i] != '\0'; i++)
		{
			_putchar(str[i]);
		}
	}
	else if (len % 2)
	{
		for (k = (len - 1) / 2; k < len - 1; k++)
		{
			_putchar(str[k + 1]);
		}
	}
	_putchar('\n');
}
