#include "main.h"

/**
 * _strncat - concantenate two strings
 * @n: amount of bytes used from src
 * @dest: destination
 * @src: source
 * Return: pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int var1 = 0, var2 = 0;

	while (*(dest + var1) != '\0')
	{
		var1++;
	}

	while (var2 < n)
	{
		*(dest + var1) = *(src + var2);
		if (*(src + var2) == '\0')
			break;
		var1++;
		var2++;
	}
	return (dest);
}
