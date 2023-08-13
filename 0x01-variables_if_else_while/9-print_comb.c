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
<<<<<<< HEAD
			putchar(' ');
		}
=======
		}
		putchar(' ');
>>>>>>> 01858ab6a2aacabb03085097335aa8cc78a8628c
		x++;
	}
	putchar('\n');
	return	(0);
}
