#include "main.h"
#include <stddef.h>

/**
  * *_strpbrk - a function that searches a string for any of a set of bytes
  *@s: source parameter for function _strpbrk
  *@accept: parameter for function _strpbrk
  *Return: s
  **/

char *_strpbrk(char *s, char *accept)
{
	int i, j;


	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (accept[j] == s[i])
			{
				return (&s[i]);
			}
		}
	}
	return (NULL);
}
