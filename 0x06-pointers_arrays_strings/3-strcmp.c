#include "main.h"

/**
  *_strcmp - compares two strings
  *@s1: parameter to function strcmp
  *@s2: parameter to function strcmp
  *Return: retun value for function _strcmp
  **/

int _strcmp(char *s1, char *s2)
{
	char *dest = s1;
	char *src  = s2;

	while (*dest != '\0' && *src != '\0')
	{
		if (*dest > *src)
		{
			return (1);
		}
		else if (*dest < *src)
		{
			return (-1);
		}
		dest++;
		src++;
	}
	if (*dest == '\0' && *src == '\0')
	{
		return (0);
	}
	else if (*dest  == '\0')
	{
		return (-1);
	}
	else
	{
		return (1);
	}
}

