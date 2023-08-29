#include "main.h"
#include <stddef.h>

/**
  * *_strstr - a function that locates a substring.
  *@haystack: parameter of function _strstr
  *@needle: parameter of function _strstr
  *Return: haystack
  **/


char *_strstr(char *haystack, char *needle)
{
	int i, j;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; needle[j] != '\0'; j++)
			if (haystack[i + j] != needle[j])
			{
				break;
			}
		if (needle[j] == '\0')
		{
			return (&haystack[i]);
		}
	}
	return (NULL);
}

