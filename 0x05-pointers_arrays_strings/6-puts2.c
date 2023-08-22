#include "main.h"

/**
  * puts2 - function that print every other character of a string
  *@str: parameter of function put2
  *fellowed by a new line
  **/

void puts2(char *str)
{
	int i;
	int len = 0;

	while (str[len] != '\0')
	{
		len++;
	}
	for (i = 0; i < len; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}



