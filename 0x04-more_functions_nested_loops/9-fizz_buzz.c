#include <stdio.h>

/**
  * main - print numbers from 1 to 100
  * fellowed by a new line
  * Return: 0
  *
  **/

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if ((i % 3 == 0) && (i % 5 != 0))
		{
			printf("Fizz ");
		}
		else if ((i % 3 != 0) && (i % 5 == 0))
		{
			printf("Buzz");
			if (i != 100)
			{
				printf(" ");
			}
		}
		else if ((i % 3 == 0) && (i % 5 == 0))
		{
			printf("FizzBuzz ");
		}
		else
		{
			printf("%d ", i);
		}
	}
	printf("\n");
	return (0);
}

