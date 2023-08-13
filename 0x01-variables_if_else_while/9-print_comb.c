
<<<<<<< HEAD
=======
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
		x++;
	}
	putchar('\n');
	return	(0);
}
>>>>>>> 6efa543435da0f6e430ed6c97e1f5d39e54d8d11
