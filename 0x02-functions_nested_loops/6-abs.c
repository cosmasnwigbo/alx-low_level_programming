#include	"main.h"

/**
  * _abs - print the absolute value of a interger
  *@b:  parameter of function _abs
  * Return: b
  *
  **/

int _abs(int	b)

{
	int	x	=	b;

	if	(x	<	0)
	{
		b	=	x	+	((-2)	*	(x));

		return	(b);
	}
	else	if	(x	==	0)
	{
		return	(x);
	}
	else	if	(x	>	0)
	{
		return	(x);
	}
	return	(x);
}
