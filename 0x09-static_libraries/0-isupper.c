#include "main.h"

/**
  *_isupper - checks for uppercase characters
  *@c: parameter for function _isupper
  * Return: 1 or 0
  **/

int _isupper(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
	{
		return (1);
	}
	return (0);
}

