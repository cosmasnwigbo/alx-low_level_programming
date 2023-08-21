#include "main.h"

/**
  *swap_int - swap the values in of two integers
  *@a: paramter of function swap
  *@b: parameter of function swap
  * fellowed by a new line
  **/

void swap_int(int *a, int *b)
{
	int tmp = *b;

	*b  = *a;
	*a = tmp;

}
