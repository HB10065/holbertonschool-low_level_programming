#include "main.h"
#include <stdio.h>

/**
 * main - algo
 * Return: 0
 */
int main(void)
{
	int i = 0;

	while (i <= 100)
	{
		if (i % 3 == 0 && i % 5 == 0 && i != 0)
			printf("FizzBuzz");
		else if (i % 3 == 0 && i != 0)
			printf("Fizz");
		else if (i % 5 == 0 && i != 0)
			printf("Buzz");
		else
			printf("%d", i);
		if (i != 100)
			printf(" ");
		i++;
	}
	printf("\n");
	return (0);
}
