#include "main.h"

/**
  *_strlen -function that returns the length of a string
  *@s: parmeter to function strlen
  * fellowed by a new line
  *Return:length of string
  **/

int _strlen(char *s)
{
	int count = 0;
	int i = 0;

	while (s[i] != '\0')
	{
		count++;
		i++;
	}
	return (count);


}
