#include "main.h"

/**
 * rev_string - sheesh
 * @s: given string
 */
void rev_string(char *s)
{
        int i = 0, j = 0;

        while (s[i] != '\0')
                i++;
	char st[i];
        i--;
        while (i >= 0)
        {
                st[j] = s[i];
		j++;
                i--;
        }
	*s = st;
}
