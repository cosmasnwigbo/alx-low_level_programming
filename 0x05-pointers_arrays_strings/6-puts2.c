#include "main.h"

/**
  * puts2 - function that print every other character of a string
  *@str: parameter of function put2
  *fellowed by a new line
  **/

void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}



