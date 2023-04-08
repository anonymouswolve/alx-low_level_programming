#include "main.h"
#include <stdio.h>
/**
 * infinite_add - adds two numbers
 * @n1: number one.
 * @n2: number two.
 * @r: buffer that the function will use to store the result.
 * @size_r: buffer size:
 * Return: the pointer to dest.
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int b1 = 0, b2 = 0, og, bg, bc1, bc2, add = 0;

	while (*(n1 + b1) != '\0')
		b1++;
	while (*(n2 + b2) != '\0')
		b2++;
	if (b1 >= b2)
		bg = b1;
	else
		bg = b2;
	if (size_r <= bg + 1)
		return (0);
	r[bg + 1] = '\0';
	b1--, b2--, size_r--;
	bc1 = *(n1 + b1) - 48, bc2 = *(n2 + b2) - 48;
	while (bg >= 0)
	{
		og = bc1 + bc2 + add;
		if (og >= 10)
			add = og / 10;
		else
			add = 0;
		if (og > 0)
		*(r + bg) = (og % 10) + 48;
		else
			*(r + bg) = '0';
		if (b1 > 0)
			b1--, bc1 = *(n1 + b1) - 48;
		else
			bc1 = 0;
		if (b2 > 0)
			b2--, bc1 = *(n2 + b2) - 48;
		else
			bc2 = 0;
		bg--, size_r--;
	}
	if (*(r) == '0')
		return (r + 1);
	else
		return (r);
}
