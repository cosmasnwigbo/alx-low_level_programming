#include "main.h"

/**
  *string_toupper - a function that changes all lowercase letters to uppercase
  *@string: value at string_upper parameter
  *Return: char value
  **/

char *string_toupper(char *string)
{
	char *string1 = string;

	while (*string != '\0')
	{
		if (*string >= 'a' && *string <= 'z')
		{
			*string -= 32;
		}
		string++;
	}
	return (string1);
}
