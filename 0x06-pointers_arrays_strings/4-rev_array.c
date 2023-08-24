#include "main.h"
/**
  *reverse_array - a function that reverses the content of an array of integers
  *@a: parameter of function reverse_array
  *@n: number of elements of array
  **/

void reverse_array(int *a, int n)
{
	int *i = a;
	int *k = a + n - 1;
	while (i < k)
	{
		int tmp = *i;
		*i = *k;
	        *k = tmp;
	}
	i++;
	k--;
}
			
