#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - asfaef
 * Return: Nothing
 */
int main(void)
{
	int n, lastdn;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastdn = n % 10;
	printf("Last digit of %d is %d", n, lastdn);
	if (lastdn > 5)
		printf(" and is greater than 5\n");
	else if (lastdn == 0)
		printf(" and is 0\n");
	else if (lastdn < 6 && lastdn != 0)
		printf(" and is less than 6 and not 0\n");
	else
		printf(" and is some number");
	return (0);
}
