#include "main.h"
#include <stddef.h>

/**
  * *_strchr - a function that locates a character in a string.
  *@s: parameter of function _strchar
  *@c: parameter of function _strchr
  *Return: s otherwise NULL
  **/

char *_strchr(char *s, char c)
{
	int i;

	for  (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			return (&s[i]);
		}
	}
	return (NULL);
}
