#include "main.h"
/**
 * print_last_digit - gives the last digit of a given number
 * @d: given number
 * Return: a variable (ld) that is the last digit of d
 */
int print_last_digit(int d)
{
	int ld;

	ld = d % 10;
	return (ld);
}
