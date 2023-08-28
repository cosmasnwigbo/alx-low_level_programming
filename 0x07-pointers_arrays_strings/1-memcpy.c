#include "main.h"

/**
  **_memcpy - a function that copies memory area
  *@dest: parameter of function
  *@src: source of  bytes
  *@n: number of bytes to copy
  *Return: dest
  **/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
		dest++;
		src++;
	}
	return (0);
}
