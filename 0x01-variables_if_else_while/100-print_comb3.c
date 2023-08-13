#include	<stdio.h>
/**
  *	main	-	function	print	all	possible	combination
  *	of	two	digits
  *	Return:	0
  **/

int	main(void)
{
	int	x;
	int	y;

	for	(x	=	'0';	x	<=	'8';	x++)
	{
		for	(y	=	1;	y	<=	'9';	y++)
		{
			if	(y	>	x)
			{
				putchar(x);
				putchar(y);
			}
			if	(y	>	x	&&	x	<	'8')
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return	(0);
}
