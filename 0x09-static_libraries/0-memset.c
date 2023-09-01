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

	for (i = 0; i < n; i++)
	{
		s[i] = b;

	}
	return (s);
}


