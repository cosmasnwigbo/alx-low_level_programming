#include	"main.h"

/**
  * print_last_digit - print last digit of a number
  * @n: parameter of function last_digits
  *Return: value of last the digit
  *
  **/

int print_last_digit(int	n)
{
	n	=	n	%	10;
	if	(n	<	0)
	{
		n	=	n	*	(-1);
	}
	else
	{
		_putchar(n	+	'0');
	}
	return	(n);
}


