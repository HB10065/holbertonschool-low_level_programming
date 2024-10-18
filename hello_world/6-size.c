#include <stdio.h>
/**
 * main - Prints sizes
 *Return: 0
*/
int main(void)
{
#ifdef __x86_64__ /*checks if the architecture is 64 bits */
	printf("Size of a char: 1 byte(s)\nSize of an int: 4 byte(s)\nSize of a long int: 8 byte(s)\nSize of a long long int: 8 byte(s)\nSize of a float: 4 byte(s)\n");
#elif __i386__ /*checks if the architecture is 32 bits */
	printf("Size of a char: 1 byte(s)\nSize of an int: 4 byte(s)\nSize of a long int: 4 byte(s)\nSize of a long long int: 8 byte(s)\nSize of a float: 4 byte(s)\n");
#endif
	return (0);
}
