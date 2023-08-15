#include	"main.h"
/**
  * print_sign	-	prints the sign of a number
  * @c: interger to check
  * print + - or 0
  * Return (1) and print (+) if number > zero,
  * Return 0  and print 0 if c == 0
  * Return: -1 and print (-) if c < 0
  **/
int	print_sign(int	c)
{
	if	(c	>	0)
	{
		_putchar('+');
		return	(1);
	}
	else	if	(c	==	0)
	{
		_putchar(0	+	'0');
		return	(0);
	}
	else
	{
		_putchar('-');
		return	(-1);
	}
}



