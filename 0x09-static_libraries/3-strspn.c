#include "main.h"

/**
  *_strspn - a function that gets the length of a prefix substring.
  *@s: parameter and source string for _strspn
  *@accept:parameter of function _strspn
  *Return: s
  **/

unsigned int _strspn(char *s, char *accept)
{
	int i, j;
	int counter = 0;

	for (i = 0; s[i] != '\0' && s[i] != ' '; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
		{
			counter++;				}
		}
	}
	return (counter);
}
