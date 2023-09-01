#include "main.h"

/**
  *_puts- print a string
  *@str: parameter for function _puts
  **/

void _puts(char *str)
{

	int i = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
