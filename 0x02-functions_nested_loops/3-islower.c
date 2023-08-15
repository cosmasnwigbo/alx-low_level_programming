#include	"main.h"
/**
  * _islower - print lower case character
  * @c: character to print
  * Return: 1 if c else 0
  **/

int _islower(int	c)
{
	if	(c	>=	'a'	&&	c	<=	'z')
	{
		return	(1);
	}
	return	(0);
}
