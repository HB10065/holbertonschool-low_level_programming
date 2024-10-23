#include "main.h"
/**
 * _islower - checks if given letter is lowercase or not
 * @c: letter in ascii or between ''
 * Return: 1 or 0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
