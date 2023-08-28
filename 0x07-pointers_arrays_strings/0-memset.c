#include "main.h"

/**
  * *_memset - a function that fills memory with a constant byte
  *@s: parameter of function _memset
  *@b: parameter of function _memset
  *@n: number of bytes to copy
  *Return: s
  **/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;
	*s = b;

	for (i = 0; i < n; i++)
	{
		*(s + 1) = b;
		s++;
	}
	return (s);
}


