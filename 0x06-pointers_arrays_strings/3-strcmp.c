#include "main.h"

/**
  *_strcmp - compares two strings
  *@s1: parameter to function strcmp
  *@s2: parameter to function strcmp
  *Return: retun value for function _strcmp
  **/

int _strcmp(char *s1, char *s2)
{

	while (*s1 != '\0' && *s2 != '\0')
	{
		if (*s1 > *s2)
		{
			return (*s1);
		}
		else if (*s1 < *s2)
		{
			return (-*s2);
		}
		s1++;
		s2++;
	}
	if (*s1 == '\0' && *s2 == '\0')
	{
		return (0);
	}
	else if (*s1 == '\0')
	{
		return (-*s1);
	}
	else
	{
		return (*s1);
	}
}

