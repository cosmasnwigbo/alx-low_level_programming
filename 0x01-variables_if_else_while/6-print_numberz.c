#include	<stdio.h>
/**
  * main	-	function	print	all	single	digits	of
  * base	10	using	putchar
  * Return:	0
  **/

int	main(void)
{
	 int	x	=	0;

	 while	(x	<=	9)
	 {
		 putchar(x	+	'0');
		 x++;
	 }
	 putchar('\n');
	 return	(0);
}

