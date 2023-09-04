#include <stdio.h>
#include <stdlib.h>

/**
  * main -  program that should print the result of the multiplication
  *@argc: paramter of function
  *@argv: parameter of function
  *Return: 0
  **/




int main(int argc, char *argv[])
{
	int result;

	if (argc < 3 || argc > 3)
	{
		printf("error");
		return (1);
	}
	else if (argc == 3)
	{
		printf("%d\n", (atoi(argv[1]) * atoi(argv[2])));
	}
	return (0);
}
