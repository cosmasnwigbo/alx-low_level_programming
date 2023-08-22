#include "main.h"

/**
  *print_rev - print a string in reverse
  *@s: parameter to funcion print_env
  *
  **/

void print_rev(char *s)
{
	int i = 0;
	int count;
	int k;

	while (s[i] != '\0')
	{
		i++;
	}
	count = i;
	for (k = count - 1; k >= 0; k--)
	{
		_putchar(s[k]);
	}
}
