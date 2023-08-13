#include	<stdio.h>

/**
  *	main	-	function	print	all	combination	of
  *	single	digits
  *	Return:	0
  **/

int	main(void)
{
	int	x	=	0;

	while	(x	<=	9)
	{
		putchar(x	+	'0');
		if	(x	<	9)
		{
			putchar(',');
			putchar(' ');
		}
		putchar(' ');
		x++;
	}
	putchar('\n');
	return	(0);
}
