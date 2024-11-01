#include "main.h"

/**
 * rev_string - sheesh
 * @s: given string
 */
void rev_string(char *s)
{
        int i = 0, j, y = 0;
	char a;

        while (s[i] != '\0')
                i++;
	j = i / 2;
        while (i >= j)
        {
		a = s[y];
		s[y] = s[i];
		s[i] = a;
		y++;
                i--;
        }
}
