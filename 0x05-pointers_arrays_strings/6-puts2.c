#include "main.h"

/**
  * puts_half - function that print every other character of a string
  *@: str parameter of function put
  *fellowed by a new line
  **/

void puts2(char *str)
{
	int i;
	for (i = 0; str[i] != '\0'; i+=2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}



