#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * infinite_add - Adds to numbers in a string
 * @n1: The number
 * @n2: The number
 * @r: The result
 * @size_r: The qty
 *
 * Return: none
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int  i, j, a = 0, b = 0, c = 0, d = 0;
	int s_n1 = 0, s_n2 = 0, s_r = 0;

	r = '\0';
	s_n1 = strlen(n1);
	s_n2 = strlen(n2);
	if (size_r < s_n1 || size_r < s_n2)
		return (r);
	s_r = size_r - 1;
	for (i = (s_n1 - 1), j = (s_n2 - 1); i >= 0 || j >= 0;)
	{
		if (n1[i] != '\0')
		{
			a = n1[i] - 48;
			i--;
		}
		else
		{
			a = 0;
			i = 0;
		}
		if (n2[j] != '\0')
		{
			b = n2[j] - 48;
			j--;
		}
		else
		{
			b = 0;
			j = 0;
		}
		c = (a + b + d) / 10;
		printf("%c", (a + b + d) % 10 + 48);
		/* *(r+(s_r - 1)) = (a + b + d) % 10 + 48; */
		r[i] = (a + b + d) % 10 + 48;
		d = c;
		s_r--;
	}
	printf("%c", d % 10 + 48);
	printf("\n");
	getchar();
	/* r[size_r - 1] = '\0'; */

	return (r);
}
